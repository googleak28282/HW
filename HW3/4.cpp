#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Please input m,n:";
	cin>>n>>m;
	cout<<"Perfect number in["<<n<<","<<m<<"]:";
	for(int i=n;i<=m;i++){
		int s=0;
		for(int j=1;j<i;j++){
			if(i%j==0) s+=j;
			//cout<<s<<" "<<i<<endl;
		}
		//cout<<s<<" "<<i<<endl;
		if(s==i) cout<<i<<" ";
	}
	cout<<endl;
}