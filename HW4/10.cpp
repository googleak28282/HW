#include <iostream>
using namespace std;
struct st
{
	int ch;
	int ma;
	int en;
	string na;
};
st s[200]={0};
bool operator <(st a,st b){
	return a.ch+a.ma+a.en<b.ch+b.ma+b.en
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].ch>>s[i].ma>>s[i].en>>s[i].na;
	}
	sort(s,s+n);
	int k;
	cin>>k;
	cout<<s[k+1].ch<<" "<<s[k+1].ma<<" "s[k+1].en<<" "<<s[k+1].na<<endl;
}