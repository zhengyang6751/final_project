#include<iostream>
#include<string>
#include "Time.h"

using namespace std;


Time::Time(int hh, int mm, int ss)
{
	hour=hh;
	min=mm;
	sec=ss;
}
Time::Time()
{
	hour=0;
	min=0;
}
Time::~Time()
{
	//none
}
int Time::GetHour() const
{
	return hour;
}
int Time::GetMin() const
{
	return min;
}
int Time::GetSec() const
{
	return sec;
}
void Time::SetHour(int hh)
{
	hour=hh;
}
void Time::SetMin(int mm)
{
	min=mm;
}
void Time::SetSec(int ss)
{
	sec=ss;
}
void Time::SetTime(int hh, int mm, int ss)
{
	hour=hh;
	min=mm;
	sec=ss;
}
void Time::printTime()
{
	cout<<"Time: "<<hour<<":"<<min <<":"<<sec<<'\n';
}
istream & operator >>( istream & input, Time & T )
{
	string time,sHH,sMM,sSS;
	int position, hh, mm, ss;

	getline(input,sHH,':');
	getline(input,sMM,'\n');
	getline(input,sSS,'\n');

	hh=stoi(sHH);
	mm=stoi(sMM);
	ss=stoi(sSS);

	T.SetHour(hh);
	T.SetMin(mm);
	T.SetSec(ss);
	return input;
}
ostream & operator <<( ostream & os, const Time & T )
{
	os<<"Time: "<<T.GetHour()<<":"<<T.GetMin()<<":"<<T.GetSec()<<'\n';
	return os;
}
bool operator ==(const Time &T1, const Time &T2)
{
	if(T1.GetHour()==T2.GetHour() && T1.GetMin()==T2.GetMin() && T1.GetSec()==T2.GetSec())
		return true;
	else
		return false;
}