#include "cauculate.h"
using namespace std;
void getnumber(string s,string t,int a[],int b[]){
	for(int i=s.size()-1;i>=0;i--){
		a[s.size()-1-i]=s[i]-'0';
	}
	for(int i=t.size()-1;i>=0;i--){
		b[t.size()-1-i]=t[i]-'0';
	}
}
void add(int a[], int b[], int c[])
{
        int i = 0,carry = 0;
        for(i = 0; i < 100; ++i){
                c[i] = a[i] + b[i] + carry;
                carry = c[i] / 10;
                c[i] %= 10;
        }
}
void shownumber(){
	int k=max(s.size(),t.size());
	if(c[k]==1){
		for(int i=k;i>=0;i++) cout<<c[i];
		cout<<endl;
	}
	if(c[k]==0){
		for(int i=k-1;i>=0;i++) cout<<c[i];
		cout<<endl;
	}
}
