#include <iostream>
using namespace std;
int main()
{
	int x,y;
	Circle c(2,3,5);
	c.getO(x,y);
	cout<<"The center is ("<<x<<","<<y<<")"<<endl;
	cout<<"The radius is "<<c.getR()<<endl;
	c.setR(10);
	c.moveTo(1,1);
	c.getO(x,y);
	cout<<"The new center is ("<<x<<","<<y<<")"<<endl;
	cout<<"The new radius is "<<c.getR()<<endl;
	return 0;
}	
