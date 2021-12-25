#ifndef COLOR_H
#define COLOR_H

typedef unsigned char uchar;

#define RED 0xff0000
#define GREEN 0x00ff00
#define BLUE 0x0000ff
#define WHITE 0xffffff
#define BLACK 0x000000

class Color{
public:
    uchar R,G,B,A;

    /* Default constructor */
    Color();

    /* Constructor

        unsigned long a - colors' transparency

        Constructs color from
    */
	Color(unsigned long a);

	/* Constructor
        uchar R - color red value (0-255)
        uchar G - color green value (0-255)
        uchar B - color blue value (0-255)
        uchar A - color transparency value (0-255)

        Constructs color from main colors' values (R, G, B) using transparency
    */
	Color(uchar R, uchar G, uchar B, uchar A=255);

	/* Constructor
        c - color instance

        Constructs color from another
    */
	Color(const Color& c);

    /* void setColor(unsigned long a);

        unsigned long a -

        Sets color from
    */
	void setColor(unsigned long a);

	/* void setColor(uchar R, uchar G, uchar B, uchar A=255);

        uchar R - color red value (0-255)
        uchar G - color green value (0-255)
        uchar B - color blue value (0-255)
        uchar A - color transparency value (0-255)

        Sets color from main colors' values (R, G, B) using transparency
    */
	void setColor(uchar R, uchar G, uchar B, uchar A=255);

	/* void setColor(const Color& c);

        c - color instance

        Sets color from another
    */
	void setColor(const Color& c);
};
#endif // COLOR_H
