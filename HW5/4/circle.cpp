#include "circle.h"
using namespace std;
Circle::Circle(int a,int b,int c){
	x=a;
	y=b;
	r=c;
}
int Circle::getR(){
	return r;
}
void Circle::getO(int _x,int _y){
	_x=x;
	_y=y;
}
void Circle::setR(int n){
	r=n;
}
void Circle::moveTo(int _x,int _y){
	x=_x;
	y=_y;
}