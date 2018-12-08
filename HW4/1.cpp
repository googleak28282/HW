#include <iostream>
using namespace std;
void sort(int n,int arr[]){
	int x , j ;
    if ( n > 1 ){
        x = arr[n-1] ;
        Sort ( n - 1 , A ) ;
        j = n - 1 ;
        while ( j > 0 && arr[j-1] > x ){
            arr[j] = arr[j-1] ;
            j = j - 1 ;
        }
        A[j] = x ;
    }
}
int main(){
	int n;
	cin>>n;
	int arr[1000]={0};
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
	sort(n,arr);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}