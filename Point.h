#ifndef POINT_H
#define POINT_H

class Point{
public:
    int x,y;

    /* Default constructor */
    Point();

	/* Constructor
        int x - x coordinate of point
        int y - y coordinate of point

        Constructs point in position (x,y) from x and y coordinates
    */
	Point(int x, int y);

	/* Constructor
        Point p - point instance

        Constructs point instance from another
    */
	Point(const Point& p);
};
#endif // POINT_H
