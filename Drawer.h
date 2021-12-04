#include "Shape.h"
#include "Image.h"
public class Drawer
{
    static drawShape(Image img, Shape shp)
    {
        for(auto i:shp.getPixels())
            img.setPixel(i);
    }
};
