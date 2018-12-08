#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include <iostream>
using namespace std;

class Circle
{
	public:
		Circle(int ,int ,int );
		int getR();
		void getO(int ,int);
		void setR(int);
		void moveTo(int ,int)
	private:
		int x;
		int y;
		int r;
};
#endif