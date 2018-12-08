#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int sec=n%60;
	n-=sec;
	n/=60;
	int min=n%60;
	n-=min;
	n/=60;
	cout<<n<<':'<<min<<':'<<sec<<endl;
	return 0;
}