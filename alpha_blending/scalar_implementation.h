#ifndef MANDELBROT_SCALAR_IMPLEMENTATION_H
#define MANDELBROT_SCALAR_IMPLEMENTATION_H

#include "image.h"

namespace scalar {
    void mix(const image_t *background, const image_t *foreground, image_t *out_image);
}

#endif //MANDELBROT_SCALAR_IMPLEMENTATION_H
