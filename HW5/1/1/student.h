#ifndef  STUDENT_H_INCLUDED
#define  STUDENT_H_INCLUDED
#include <iostream>
#include <algorithm>
struct student
{
	string num;
	string s;
	int math;
	int eng;
	int phy;
	int total=math+eng+phy;
};

void add(int n,student p[]);
void change(int n,student p[]);
void show(int n,student p[]);
void find1(int n,student p[]);
void find2(int n,student p[]);
bool cmp1(student s1,student s2);
bool cmp2(student s1,student s2);
void sort1(int n,student p[]);
void sort2(int n,student p[]);
#endif