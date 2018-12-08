#include <iostream>
#define inf 10000005
#define maxn 2000000
using namespace std;
typedef long long ll; 
bool np[maxn];//0代表質數  1代表合數  
int prime[maxn],cnt=0;
int main(){
	for(int i=0;i<maxn;++i) np[i]=0;
	np[0]=np[1]=true;
	for(int i=2;i<maxn;++i)
	{
		if(!np[i])// !np[i] =>  np[i]==0 
		{
			prime[cnt]=i;cnt++;//把質數存在prime陣列 
			for(int j=i+i;j<maxn;j+=i)//把質數的倍數標成合數(true) 
			{
				np[j]=true;
			}
		}
	}
	int n;
	cin>>n;
	for(int i=cnt;i<maxn;i++){
		prime[i]=inf;
	}
	int i=0;
	while(prime[i]<n){
		cout<<prime[i]<<' ';
		i++;
	}
} 