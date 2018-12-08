#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,d,y;
	cin>>m>>d>>y;
	bool f=0;
	if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))&&d>31) f=1; 
	else if(m==2){
		if((y%4==0)&&(y%100!=0)&&(y%400==0)) {
			if(d>29) f=1;
		}
		else{
			if(d>28) f=1;
		}
	}
	else if(((m==4)||(m==6)||(m==9)||(m==11))&&d>30) f=1;
	cout<<f<<endl;
	if(f==1) cout<<"error"<<endl;
	else{
		if(y%4==0&&y%100&&y%400==0) {
			if(m<=2) cout<<31*(m-1)+d;
			else cout<<31*(m-1)+d-(4*m+23)/10+1;
		}
		else
			if(m<=2) cout<<31*(m-1)+d;
			else cout<<31*(m-1)+d-(4*m+23)/10;
	}
	return 0;
}