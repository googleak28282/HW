#include<iostream>
using namespace std;
void draw(int n,char ch){
	for(int i=0;i<5;i++){
		cout<<ch;
	}
	cout<<endl;
	if(n!=1) draw(n-1,ch);
}
int main()
{
	int n;
	char c;
	cin>>n>>c;
	draw(n,c);
	return 0;
}