//I5 = 0.145533
//I10 = 0.0838771
//I15 = 0.0590338
//I20 = -30.1924
#include <iostream>
#include<cmath>
using namespace std;
double l[25];
int main(){
	for(int i=0;i<=20;i++){
		if(i==0) l[i]=1-exp(-1);
		else{
			l[i]=1-(i*l[i-1]);
		}
	}
	for(int i=0;i<=20;i++){
		cout<<l[i]<<endl;
	}
}