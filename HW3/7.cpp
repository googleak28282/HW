#include <iostream>
using namespace std;
int f[20000];
int fib(int k){
	if(k==1){
		f[1]=1
		return 1;
	} 
	else if(k==2) {
		f[2]=1;
		return 1;
	}
	else {
		f[k]=f[k-1]+f[k-2];
		return f[k];
	}
}
int main(){
	int n=2000;
	for(int i=1;i<=n;i++){
		cout<<fib(k)<<endl;
	}

}