#ifndef DATETYPE_H
#define DATETYPE_H

#pragma once
#include <string>
using namespace std;
class dateType
{
public:
    dateType(string d);
    dateType();
    virtual ~dateType();
    string getDate() const;
    string getNextDay() const;
    void addDay(int num);
    void setDay(string d);
private:
    string date;
    int date2num();
};

#endif