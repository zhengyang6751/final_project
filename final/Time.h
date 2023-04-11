#ifndef Time_h
#define Time_h

#include <iostream>
#include <string>

using namespace std;

class Time{
public:
	Time();
	Time(int hh, int mm, int ss);
	virtual ~Time();

	void SetHour(int hh);
	void SetMin(int mm);
	void SetSec(int ss);
	void SetTime(int hh, int mm, int ss);
	void printTime();

	int GetHour() const;
	int GetMin() const;
	int GetSec() const;

private:
	int hour;
	int min;
	int sec;
};
	ostream & operator <<( ostream & os, const Time & T );
	istream & operator >>( istream & input, Time & T );
	bool operator ==(const Time &T1, const Time &T2);
#endif