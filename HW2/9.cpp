#include <iostream>
#include <iomanip>
using namespace std;
int arr[2000];
int main(){
	int n;
	cin>>n; 
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i=1; i<n; ++i)
    {
        int pivot = arr[i];
 
        int j;
        for (j=i; j>0; --j)
            if (pivot < arr[j-1])
                arr[j] = arr[j-1];  // 先行往右挪
            else
                break;
 
        arr[j] = pivot;       // 插入
    }
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<endl;
    }
    return 0;
}
