#include "mytime.h"
using namespace std;
Time::Time(int a,int b,int c){
	hr=a;
	mi=b;
	se=c;
}
void Time::display(){
	cout<<hr<<":"<<mi<<":"<<se<<endl;
}
void Time::settime(int a,int b,int c){
	hr=a;
	mi=b;
	se=c;
}