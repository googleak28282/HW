#include "student.h"
using namespace std;
void find1(int n,student p[]){
	string st;
	cin>>st;
	bool q=0;
	for(int i=0;i<n;i++){
		if(s==p[i].num){
			cout<<p[i].num<<" "<<p[i].s<<" "<<p[i].math<<" "<<p[i].eng<<" "<<p[i].phy<<endl;
			q++;
			break;
		}
	}
	if(q==0) cout<<"error";
}
void find2(int n,student p[]){
	string st;
	cin>>st;
	bool q=0;
	for(int i=0;i<n;i++){
		if(s==p[i].s){
			cout<<p[i].num<<" "<<p[i].s<<" "<<p[i].math<<" "<<p[i].eng<<" "<<p[i].phy<<endl;
			q++;
			break;
		}
	}
	if(q==0) cout<<"error";
}