//1,5,10,20,50 =>4.242
//1,5,16,23,33 =>4.152
#include <iostream>
using namespace std;
int money1[5]={50,20,10,5,1};
int money2[5]={33,23,16,5,1};
int arr1[99];
int arr2[99];
int main(){
	for(int i=1;i<=99;i++){
		int k=i;
		for(int j=0;j<5;j++){
			while(k>=money1[j]){
				arr1[i-1]++;
				k-=money1[j];
			}
		}
		int t=i;
		for(int j=0;j<5;j++){
			while(t>=money2[j]){
				arr2[i-1]++;
				t-=money2[j];
			}
		}
	}
	int t1=0,t2=0;
	for(int i=0;i<99;i++){
		cout<<i+1<<' '<<arr1[i]<<' '<<arr2[i]<<endl;
		t1+=arr1[i];
		t2+=arr2[i];
	}
	cout<<(t1*1.0)/99<<" "<<(t2*1.0)/99<<endl;
}