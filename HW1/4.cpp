#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	printf("%d+%d=%d\n",a,b,a+b );
	printf("%d*%d=%d\n",a,b,a*b );
	if(b==0){
		printf("%d/%d=Error !\n",a,b );
		cout<<a<<"%"<<b<<"=Error !\n";
	}
	else{
		printf("%d/%d=%d\n",a,b,a/b );
		cout<<a<<"%"<<b<<"="<<a%b<<endl;
	}
	return 0;
}