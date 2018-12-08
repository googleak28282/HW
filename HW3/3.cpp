#include <iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int k;
	char c;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]<48){
			k=i;
			c=s[i];
		}
	}
	int a=0,b=0;
	int n;
	n=1;
	for(int i=k-1;i>=0;i--){
		s[i]-='0';
		a+=s[i]*n;
		n*=10;
	}
	n=1;
	for(int i=s.size()-1;i>=k+1;i--){
		s[i]-='0';
		b+=s[i]*n;
		n*=10;
	}
	if(s[k]=='+') cout<<a+b<<endl;
	else if(s[k]=='-') cout<<a-b<<endl;
	else if(s[k]=='*') cout<<a*b<<endl;
	else cout<<a/b<<endl;
}