#include<Point.h>

class Point{

	Point():x(0),y(0){}
	Point(int x, int y):x(x), y(y){}
	Point(const Point& p): x(p.x), y(p.y){}
};
