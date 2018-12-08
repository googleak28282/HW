#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double r;
	cin>>r;
	double pi=atan(1.0)*4;
	double v=(4.0*pi*pow(r,3))/3.0;
	double a=4.0*pi*pow(r,2);
	cout<<a<<" "<<v<<endl;
}