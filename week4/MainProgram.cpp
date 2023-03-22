#include <iostream>

#include "dateType.h"
#include "dateType.cpp"  
using namespace std;

int main()
{
    dateType date1(12, 31, 2000);
    dateType date2(2, 29, 2000);
    dateType date3(1, 31, 2000);
    dateType date4(8, 15, 2005);

    dateType date5(3, 1, 2000);
    dateType date6(1, 1, 2004);
    dateType date7(4, 1, 2000);
    dateType date8(4, 1, 2000);

    dateType temp;
    
    if (date1 < date2)
        cout << "date1 is before date2" << endl;
    else
        cout << "date1 is not before date2" << endl;

    if (date3 < date4)
        cout << "date3 is before date4" << endl;
    else
        cout << "date3 is not before date4" << endl;

    cout << "date1: " << date1 << endl;
    cout << "++date1: " << ++date1 << endl;

    cout << "date2: " << date2 << endl;
    cout << "++date2: " << ++date2 << endl;

    cout << "date3: " << date3 << endl;
    date3++;
    cout << "date3++: " << date3 << endl;

    cout << "date4: " << date4 << endl;
    date4++;
    cout << "date4++: " << date4 << endl;

    cout << "date5: " << date5 << endl;
    cout << "--date5: " << --date5 << endl;

    cout << "date6: " << date6 << endl;
    cout << "--date6: " << --date6 << endl;

    cout << "date7: " << date7 << endl;
    date7--;
    cout << "date7--: " << date7 << endl;

    cout << "date8: " << date8 << endl;
    date8--;
    cout << "date8--: " << date8 << endl;



    cout << "Enter date in the form (MM-DD-YYYY): ";
    cin >> temp;
    cout << endl;
    cout << (date1 == date2) << endl;
    cout << "temp: " << temp << endl;

    return 0;
}