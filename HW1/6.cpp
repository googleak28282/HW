#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if((a<11&&b<11)||abs(a-b)<2)
		cout<<"continue"<<endl;
	else if(a>=11&&b>=11&&abs(a-b)>=3){
		cout<<"error"<<endl;
	}
	else{
		if(a>b) cout<<"A win"<<endl;
		else cout<<"B win"<<endl;
	}

}