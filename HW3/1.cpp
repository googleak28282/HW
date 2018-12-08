#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k;
	int cnt;
	int max=-1;
	int maxn;
	for(int i=0;i<n;i++){
		cnt=0;
		for(int j=0;j<n;j++){
			cin>>k;
			if(k==1) cnt++;
			else break;
		}
		if(cnt>max){
			maxn=i+1;
			max=cnt;
		}
	}
	cout<<maxn<<endl;
}