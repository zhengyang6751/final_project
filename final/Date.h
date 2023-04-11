#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;
class Date
{
public:
    Date();
    Date(int dd, int mm, int yy);
    int GetDay() const;
	int GetMonth() const;
	int GetYear() const;

    void SetDay(int dd);
    void SetMonth(int mm);
    void SetYear(int yy);
	void SetDate(int dd, int mm, int yy);

	void printDate();

private:
    int day;
    int month;
    int year;
};
  
	ostream & operator <<( ostream & os, const Date & D );
	istream & operator >>( istream & input, Date & D );
    bool operator ==(const Date &D1, const Date &D2);
#endif // DATE_H
