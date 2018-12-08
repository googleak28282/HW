#include <iostream>
#include "array.h"
using namespace std;
int main()
{
	orderArray a(3);
	int i;
	for (int i=0;i<10;i++)
		a.add(i*i) ;
	cout<<"The array is:";
	a.show();
	cout<<endl<<"The 3rd element is: "<<a.findnum(3)<<endl;
	return 0 ;
}
