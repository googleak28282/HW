#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool c[128]={0};
char arr[85];
int main(){
	string s;
	cout<<"Please input a string:";
	cin>>s;
	int cnt=0;
	for (int i = 0; i < s.size(); i++)
	{
		if(c[s[i]]==0){
			c[s[i]]=1;
			arr[cnt]=s[i];
			cnt++;
		}
	}
	cnt++;
	for (int i = 0; i <= cnt; i++){
        for (int j = 0; j < cnt - i; j++){
            if (arr[j] > arr[j + 1]){
            	char tp;
                tp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tp;
            }
        }
    }
    for(int i=cnt-1;i>=0;i--){
    	cout<<arr[i];
    }
    cout<<endl;
}