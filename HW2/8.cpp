#include <iostream>
#include<Cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int MaxRow[1000]={0};    //保存行最大值的行位置 
	int MaxColumn[1000]={0};  //保存行最大值的列位置 
	int MinRow[1000]={0};     //保存列最小值的行位置 
	int MinColumn[1000]={0};  //保存列最小值的列位置
	int RowMax[1000]={0};   //行最大值 
	int ColumnMin[1000]={0};  //列最大值   
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}   
	int count=0;
	for(int i=0;i<1000;i++)
		ColumnMin[i]=9999999;    
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++){
			if(a[i][j]>RowMax[i]){
				RowMax[i]=a[i][j];
				MaxRow[i]=i;
				MaxColumn[i]=j;
			}
			if(a[j][i]<ColumnMin[i]){
				ColumnMin[i]=a[j][i];
				MinColumn[i]=i;
				MinRow[i]=j;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){  
			if (MaxRow[i]==MinRow[j]&&MaxColumn[i]==MinColumn[j]){
				cout<<MaxRow[i]+1<<" "<<MaxColumn[i]+1<<" "<<a[MaxRow[i]][MaxColumn[i]]<<endl; 
				count++;
			}
		}
	}
	if(count==0){
		cout<<"no"<<endl;
	}  
	return 0;
}
