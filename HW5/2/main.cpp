#include <iostream>
#include "cauculate.h"
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	int a[100],b[100],c[100];
	getnumber(s,t,a,b);
	add(a,b,c);
	shownumber();
}