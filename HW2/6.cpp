#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	srand(time(NULL));
	int n=(rand()%100)+1;
	bool flag=0;
	for(int i=0;i<7;i++){
		int k;
		cin>>k;
		if(n==k) {
			cout<<"right"<<endl;
			flag=1;
			break;
		}
		else if(n>k){
			cout<<"too small"<<endl;
		}
		else{
			cout<<"too big"<<endl;
		}
	}
	if(flag==0) cout<<"Game Over"<<endl;
}