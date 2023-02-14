#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;
dateType::dateType(string d)
{
    date = d;
}
dateType::dateType()
{
    date = "Sun";
}
dateType::~dateType()
{

}
string dateType::getDate() const{
    return date;
}
string dateType::getNextDay()const{
    if(date == "mon" || date == "Mon") return "Tues";
    else if(date == "Tues" || date == "tues") return "Wed";
    else if(date == "Wed" || date == "wed") return "Thur";
    else if(date == "Thur" || date == "thur") return "Fri";
    else if(date == "fri" || date == "Fri") return "Sat";
    else if(date == "sat" || date == "Sat") return "Sun";
    else if(date == "Sun" || date == "sun") return "Mon";
    else{
        cout << "wrong weekday" << endl;
        return NULL;
    }
}
void dateType::addDay(int num){
    int dayNum = 0;
    dayNum = date2num();
    dayNum += num;
    switch (dayNum % 7)
    {
    case 1:
        date = "Mon";
        break;
    case 2:
        date = "Tues";
        break;
    case 3:
        date = "Wed";
        break;
    case 4:
        date = "Thur";
        break;
    case 5:
        date = "Fri";
        break;
    case 6:
        date = "Sat";
        break;
    case 7:
        date = "Sun";
        break;
    default:
        break;
    }
}

void dateType::setDay(string d){
    date = d;
}
int dateType::date2num(){
    if(date == "mon" || date == "Mon") return 1;
        else if(date == "Tues" || date == "tues") return 2;
        else if(date == "Wed" || date == "wed") return 3;
        else if(date == "Thur" || date == "thur") return 4;
        else if(date == "fri" || date == "Fri") return 5;
        else if(date == "sat" || date == "Sat") return 6;
        else if(date == "Sun" || date == "sun") return 7;
        else{
        cout << "wrong weekday" << endl;
        return -1;
}
}