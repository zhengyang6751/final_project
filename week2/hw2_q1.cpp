#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
const double DISCOUNT1 = 0.4;
const double DISCOUNT2 = 0.7;
int main(){
    cout << fixed << showpoint << setprecision(2);
    int hourlyRate = 0;
    double income = 0;
    char incomeType;
    int consultingTime = 0;
    double amount = 0;
    cout << "input your hourly rate, consulting time and \
your yearly income " << endl;
    cin >> hourlyRate >> consultingTime >> income;
    incomeType = (income >= 25000) ? 'n' : 'y';
    if(incomeType == 'y'){
        if(consultingTime <= 30){
            cout << "Free";
        }
        else{
            consultingTime -= 30;
            amount = (double(consultingTime) / 60) * hourlyRate * DISCOUNT1;
            cout << "The service fee is " << amount << endl;
        }
    }
    if(incomeType == 'n'){
        if(consultingTime <= 20){
            cout << "Free";
        }
        else{
            consultingTime -= 20;
            amount = (double(consultingTime) / 60) * hourlyRate * DISCOUNT2;
            cout << "The service fee is " << amount << endl;
        }
    }
    return 0;
}