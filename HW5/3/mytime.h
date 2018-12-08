#ifndef MYTIME_H_INCLUDED
#define MYTIME_H_INCLUDED

#include <iostream>
using namespace std;
class Time
{
	public:
	Time(int,int,int);
	~Time();
	void display();
	void settime(int,int,int);
	private:
	int hr;
	int mi;
	int se;
};

#endif