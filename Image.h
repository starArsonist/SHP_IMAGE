#include<bits/stdc++.h>
#include<Color.h>
#include<Pixel.h>
#include<lodepng>
using namespace std;
class Image {
private:
    vector<Pixel> Pixels;
    int x,y;
public:
    Image():Pixels(1),x(1),y(1){}
    Image(const Image& img):Pixels(img.Pixels),x(img.x),y(img.y){}
    Image(vector<Pixel> pix, int x, int y):Pixels(pix),x(x),y(y){}
    int getXofPixel(int number){

    }
    void drawImagefromfile(string filename) {
        lodepng::encode((fileName + ".png").c_str(), Pixels, x, y);
        int pixelscount = x*y;
        Pixel pixel;
        Point point;
        Color color;
        Pixels(pixelscount);
        int j=1, p=1;
        for(int i=0, i<=Pixels.size(), i++)
        {
            if(j!=x+1)
            {
                point(j, p);
                Pixels[i] = pixel(color, point);
                j++;
            }
            if(j=x)
            {
                j=1; p++;
                point(j, p);
                Pixels[i] = pixel(color, point);
            }
            if(p=y && j=x) break;
        }
        return;
    }
    void makeImagemonochrome() {

    }
};
