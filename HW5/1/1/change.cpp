#include "student.h"
using namespace std;
void add(int n,student p[]){
	cin>>p[n].num>>p[n].s>>p[n].math>>p[n].eng>>p[n].phy;
}
void change(int n,student p[]){
	string st;
	cin>>st;
	bool q=0;
	for(int i=0;i<n;i++){
		if(s==p[i].num){
			cout<<"input the information";
			cin>>p[i].s>>p[i].math>>p[i].eng>>p[i].phy;
			q++;
			break;
		}
	}
	if(q==0) cout<<"error";
}