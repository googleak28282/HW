#include "student.h"
using namespace std;
void show(int n,student p[]){
	for(int i=0;i<n;i++){
		cout<<p[i].num<<" "<<p[i].s<<" "<<p[i].math<<" "<<p[i].eng<<" "<<p[i].phy<<endl;
	}
}