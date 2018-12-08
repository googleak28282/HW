#include "student.h"
using namespace std;
bool cmp1(student s1,student s2){
	return s1.num.length()<s2.num.length();
	if(s1.num.length()==s2.num.length()) 
}
bool cmp2(student s1,student s2){
	return s1.total<s2.total;
	if(s1.total==s2.total) return s1.num>s2.num;
}
void sort1(int n,student p[]){
	sort(p,p+n,cmp1);
}
void sort2(int n,student p[]){
	sort(p,p+n,cmp2);
}