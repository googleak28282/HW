#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	bool tp=0;
	for(int i=n;i<=m;i++){
		int k=i;
		int ans=0;
		
		while(k!=0){
			ans+=(k%10)*(k%10)*(k%10);
			k/=10;
		}
		if(ans==i) {
			cout<<ans<<endl;
			tp=1;
		}
	}
	if(tp==0) cout<<"no"<<endl;
	return 0;
}