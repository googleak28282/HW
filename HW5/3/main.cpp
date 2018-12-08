#include <iostream>
#include "mytime.h"
using namespace std;
int main()
{
	Time t(20,13,59);
	cout<<”Time t is: “;
	t.display();
	t.settime(11,11,11);
	cout<<"The new time is:";
	t.display();
	return 0;
}
