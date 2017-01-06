#include "register_types.h"

#include "image_loader_tga.h"

static ImageLoaderTGA *image_loader_tga = NULL;

void register_tga_types() {

	image_loader_tga = memnew(ImageLoaderTGA);
	ImageLoader::add_image_format_loader(image_loader_tga);
}

void unregister_tga_types() {

	memdelete( image_loader_tga );
}
