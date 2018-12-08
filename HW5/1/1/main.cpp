#include <iostream>
#include "student.h"
using namespace std;
student st[1000];
int k=0;
int main()
{
    cout<<"欢迎使用成绩管理系统!"<<endl;
    cout<<"1 ---添加学生信息"<<endl;
    cout<<"2 ---修改学生信息"<<endl;
    cout<<"3 ---显示全部学生信息"<<endl;
    cout<<"4 ---按学号查询学生信息"<<endl;
    cout<<"5 ---按姓名查询学生信息"<<endl;
    cout<<"6 ---按学号升序排序"<<endl;
    cout<<"7 ---按总分降序排序"<<endl;
    cout<<"0 ---退出"<<endl;
    int n;
    while(cin>>n){
    	if(n==0) break;
    	if(n==1) {
    		add(k,st);
    		k++;
    	}
    	if(n==2) change(k,st);
    	if(n==3) show(k,st);
    	if(n==4) find1(k,st);
    	if(n==5) find2(k,st);
    	if(n==6) sort1(k,st);
    	if(n==7) sort2(k,st);
    }
    return 0;
}
