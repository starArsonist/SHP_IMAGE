#include<Color.h>

class Color{

    Color():R(0), G(0),B(0), A(0){}
	Color(unsigned long a):R(a>>16),G(a>>8),B(a),A(255){}
	Color(uchar R, uchar G, uchar B, uchar A=255):
		R(R),G(G),B(B),A(A){}
	Color(const Color& c):R(c.R),G(c.G),B(c.B),A(c.A){}

	void setColor(unsigned long a){
		setColor(a>>16,a>>8,a);
	}
	void setColor(uchar R, uchar G, uchar B, uchar A=255){
		this->R=R;
		this->G=G;
		this->B=B;
		this->A=A;
	}
	void setColor(const Color& c){
		setColor(c.R,c.G,c.B,c.A);
	}
};
