#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "dateType.h"
#include "dateType.cpp"
using namespace std;
int main()
{
    dateType *x = new dateType();
    cout << (*x).getDate() << endl;
    (*x).addDay(2);
    cout << (*x).getDate() << endl;
    cout << (*x).getNextDay() << endl;
    (*x).setDay("Sun");
    cout << (*x).getDate() << endl;
    return 0;
}