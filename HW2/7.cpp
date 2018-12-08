#include <iostream>
#include<ctime>
#include <cmath>
using namespace std;
int arr[11]={0};
int main(){
	srand(time(NULL));
	for(int i=0;i<100;i++){
		int ans=0;
		for(int j=0;j<10;j++){
			int n=rand()%2;
			if(n==1) ans+=10;
			else ans+=5;
		}
		arr[(ans-50)/5]++;
	}
	for (int i = 0; i < 11; ++i)
	{
		cout<<arr[i]<<endl;
	}
}