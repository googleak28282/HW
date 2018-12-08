#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	/*encrypt*/
	int n;
	cin>>n;
	int a,b,c,d;
	a=(n/1000+7)%10;
	b=(n/100+7)%10;
	c=(n/10+7)%10;
	d=(n+7)%10;
	swap(a,c);
	swap(b,d);
	cout<<a<<b<<c<<d<<endl;
	/*decrypt*/
	int m;
	cin>>m;
	int w,x,y,z;
	w=(m/1000+3)%10;
	x=(m/100+3)%10;
	y=(m/10+3)%10;
	z=(m+3)%10;
	swap(w,y);
	swap(x,z);
	cout<<w<<x<<y<<z<<endl;
	return 0;
}