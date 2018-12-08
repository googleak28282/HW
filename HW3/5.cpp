#include <iostream>
using namespace std;
int M1,m1;
double M2,m2;
char M3,m3;
int maxmin(int n,int arr[]){
	M1=arr[0];
	m1=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>M1) M1=arr[i];
		if(arr[i]<m1) m1=arr[i];
	}
	return 0;

}
double maxmin(int n,double arr[]){
	M2=arr[0];
	m2=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>M1) M1=arr[i];
		if(arr[i]<m1) m1=arr[i];
	}
	return 0;

}
char maxmin(int n,char arr[]){
	M3=arr[0];
	m3=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>M1) M1=arr[i];
		if(arr[i]<m1) m1=arr[i];
	}
	return 0;

}
int main(){
	int arr1[50];
	double arr2[50];
	char arr3[50];
	int n;
	int k;
	cout<<"(1)int(2)double(3)char"<<endl;
	cin>>k;
	cout<<"input the arr length"<<endl;
	cin>>n;
	if(k==1){
		for(int i=0;i<n;i++){
			cin>>arr1[i];
		}
		maxmin(n,arr1);
		cout<<M1<<' '<<m1<<endl;
	}
	if(k==2){
		for(int i=0;i<n;i++){
			cin>>arr2[i];
		}
		maxmin(n,arr2);
		cout<<M2<<' '<<m2<<endl;
	}
	if(k==3){
		for(int i=0;i<n;i++){
			cin>>arr3[i];
		}
		maxmin(n,arr3);
		cout<<M3<<' '<<m3<<endl;
	}
}