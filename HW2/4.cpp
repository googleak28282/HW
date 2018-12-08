#include <iostream>
using namespace std;
int main(){
	int n=1;
	int tp=0;
	for(int i=1;i<=10;i++){
		n*=i;
		tp+=n;
	}
	cout<<tp<<endl;
}