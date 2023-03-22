 
#include <iostream>
#include "dateType.h"
  
using namespace std;

void dateType::setDate(int month, int day, int year)
{
    if (year >= 1)
        dYear = year;
    else
        dYear = 1900;

    if (1 <= month && month <= 12)
        dMonth = month;
    else
        dMonth = 1;

    switch (dMonth)
    {
    case 1: 
    case 3: 
    case 5: 
    case 7:
    case 8: 
    case 10: 
    case 12: 
        if (1 <= day && day <= 31)
            dDay = day;
        else
            dDay = 1;
            break;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        if (1 <= day && day <= 30)
            dDay = day;
        else
            dDay = 1;
            break;
    case 2: 
        if (isLeapYear())
        {
            if (1 <= day && day <= 29)
                dDay = day;
            else
                dDay = 1;
        }
        else
        {
            if (1 <= day && day <= 28)
                dDay = day;
            else
            dDay = 1;
        }
    }
}

void dateType::setMonth(int  m)
{
    dMonth = m;
}

void dateType::setDay(int d)
{
    dDay = d;
}

void dateType::setYear(int y)
{
    dYear = y;
}

int dateType::getMonth()  const
{
    return dMonth;
}

int dateType::getDay()  const
{
    return dDay;
}

int dateType::getYear()  const
{
    return dYear;
}

int dateType::getDaysInMonth()
{
    int noOfDays;

    switch (dMonth)
    {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
        noOfDays = 31;
        break;
    case 4: 
    case 6: 
    case 9: 
    case 11:  
        noOfDays = 30;
        break;
    case 2: 
        if (isLeapYear())
            noOfDays = 29;
        else
            noOfDays = 28;
    }

    return noOfDays;
}

bool dateType::isLeapYear()
{
    if (((dYear % 4 == 0) && (dYear % 100 != 0)) || dYear % 400 == 0)
        return true;
    else
        return false;
}

dateType::dateType(int month, int day, int year) 
{ 
    setDate(month, day, year);
}

dateType dateType::operator++()
{
    int x = getDaysInMonth();

    if (x == 31)
    {
        dDay++;

        if (dDay == 32)
        {
            dDay = 1;
            dMonth++;

            if (dMonth == 13)
            {
                dMonth = 1;
                dYear++;
            }
        }
    }
    else if (x == 30)
    {
        dDay++;

        if (dDay == 31)
        {
            dDay = 1;
            dMonth++;
        }
    }
    else
    {
        dDay++;
        if (isLeapYear())
        {
            if (dDay == 30)
            {
                dDay = 1;
                dMonth++;
            }
        }
        else if (dDay == 29)
        {
            dDay = 1;
            dMonth++;
        }
    }

    return *this;
}



dateType dateType::operator--()
{
    int x = getDaysInMonth();

    if (x == 31)
    {
        dDay--;

        if (dDay == 0)
        {
            dMonth--;

            if (dMonth == 0)
            {
                dDay = 31;
                dMonth = 12;
                dYear--;
            }
            else if (dMonth == 2)
            {
                if (isLeapYear())
                    dDay = 29;
                else
                    dDay = 28;
            }
            else
                dDay = 30;
        }
    }
    else  
    {
        dDay--;

        if (dDay == 0)
        {
            dDay = 31;
            dMonth--;
        }
    }

    return *this;
}

dateType dateType::operator--(int u)
{
    dateType temp = *this;

    int x = getDaysInMonth();

    if (x == 31)
    {
        dDay--;

        if (dDay == 0)
        {
            dMonth--;

            if (dMonth == 0)
            {
                dDay = 31;
                dMonth = 12;
                dYear--;
            }
            else if (dMonth == 2)
            {
                if (isLeapYear())
                    dDay = 29;
                else
                    dDay = 28;
            }
            else
                dDay = 30;
        }
    }
    else  // if (x == 30)
    {
        dDay--;

        if (dDay == 0)
        {
            dDay = 31;
            dMonth--;
        }
    }

    return temp;
}


bool dateType::operator==(const dateType& otherDate) const
{
    if (dDay == otherDate.dDay && dMonth == otherDate.dMonth
        && dYear == otherDate.dYear)
        return true;
    else
        return false;
}
 
bool dateType::operator!=(const dateType& otherDate) const
{
    return !(*this == otherDate); 
}
 
bool dateType::operator<=(const dateType& otherDate) const
{
    return (*this < otherDate || *this == otherDate);
}

bool dateType::operator<(const dateType& otherDate) const
{
    if ((dYear < otherDate.dYear) || 
        (dYear == otherDate.dYear && dMonth < otherDate.dMonth) ||
        (dYear == otherDate.dYear && dMonth == otherDate.dMonth 
            && dDay < otherDate.dDay))
        return true;
    else 
        return false;
}


bool dateType::operator>=(const dateType& otherDate) const
{
    return !(*this < otherDate);
}

bool dateType::operator>(const dateType& otherDate) const
{
    return !(*this <= otherDate); 
}

ostream& operator<<(ostream& os, const dateType& dateObj)
{
    if (dateObj.dMonth < 10)
        os << 0;
    os << dateObj.dMonth << "-";

    if (dateObj.dDay < 10)
        os << 0;
    os << dateObj.dDay << "-";

    os << dateObj.dYear;

    return os;
}

istream& operator>>(istream& is, dateType& dateObj)
{
    char discard;

    int day, mth, yr;

    is >> mth;
    is >> discard;
    is >> day;
    is >> discard;
    is >> yr;

    dateObj.setDate(mth, day, yr);

    return is;

}

