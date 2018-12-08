#include <iostream>
using namespace std;
int time=0;
void settime(){
	int h,m,s;
	cin>>h>>m>>s;
	time=0;
	time+=s+m*60+h*3600;
}
void increase(){
	time++;
}
void showtime(){
	int s,m,h;
	s=time%60;
	m=time/60%60;
	h=time/3600;
	cout<<h<<":"<<m<<":"<<s<<endl;
}
int main(){
	settime();
	showtime();
	increase();
	showtime();
}