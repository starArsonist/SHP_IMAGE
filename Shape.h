#include "Pixel.h"
class Shape
{
private:
    vector<Pixel> v;
public:
    Shape(){}
    Shape(const Shape& shp) v(shp.v.begin(), shp.v.end()){}
    Shape(vector<Pixel> v) v(v.begin(), v.end()) {}

    Shape& translate(int tx, int ty){
        for(auto & i:v) i.setPos(i.getX()+tx, i.getY()+ty);
        return this;
    }
    Shape& setColor(Color color){
        for(auto & i:v) i.setColor(color);
        return this;
    }
    static Shape getTriangle(size_t size, Color color){
        vector<Pixel> pixels;
        Pixel pixel(Point({0, 0}));
        pixels.push_back(pixel);
        for(int i=1; i<size; i++)
        {
            pixels.push_back(pixel);
            pixel.setPos(pixel.getX()+1, pixel.getY()+1);
        }
        while(pixel.getY()!=0)
        {
            pixel.setPos(pixel.getX(), pixel.getY()-1);
            pixels.push_back(pixel);
        }
        while(pixel.getX()!=1)
        {
            pixel.setPos(pixel.getX()-1, pixel.getY());
            pixels.push_back(pixel);
        }
        Shape shape(pixels);
        return shape;
    }
    static Shape getCircle(size_t radius, Color color)
    {

    }
    static Shape getRectangle(size_t width, size_t height, Color color){
        vector<Pixel> pixels;
        Pixel pixel(color, Point({0, 0}));
        pixels.push_back(pixel);
        for(int i=1; i<width; i++)
        {
            pixels.push_back(pixel);
            pixel.setPos(pixel.getX()+1, pixel.getY());
        }
        while(pixel.getY()!=height-1)
        {
            pixel.setPos(pixel.getX(), pixel.getY()+1);
            pixels.push_back(pixel);
        }
        while(pixel.getX()!=0)
        {
            pixel.setPos(pixel.getX()-1, pixel.getY());
            pixels.push_back(pixel);
        }
        while(pixel.getY()!=1)
        {
            pixel.setPos(pixel.getX(), pixel.getY()-1);
            pixels.push_back(pixel);
        }
        Shape shape(pixels);
        return shape;
    }
};
