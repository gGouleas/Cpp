#include <iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle(const int=1,const int=1);
		double perimeter();
		double area();
		void setLength(double l);
		void setWidth(double w);
		double getLength();
		double getWidth();
	private:
		double length;
		double width;
};
Rectangle::Rectangle(int l,int w){
	length=l;
	width=w;
}
void Rectangle::setLength(double l){
	length=(l>0.0 && l<20.0) ? l:1;
}
void Rectangle::setWidth(double w){
	width=(w>0.0 && w<20.0) ? w:1;
}
double Rectangle::getLength(){
	return length;
}
double Rectangle::getWidth(){
	return width;
}
double Rectangle::perimeter(){
		return 2*(length+width);
}

double Rectangle::area(){
		return length*width;
}


