#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
double temp = 0, speed = 0;
void getInput();
void windchill();
int main(){
    getInput();
    windchill();
    return 0;
}
void getInput(){
    cout << "input the temperature and speed" << endl;
    cin >> temp >> speed;
}
void windchill(){
    cout << fixed << showpoint << setprecision(2);
    double res;
    res = 35.74 + 0.6215 * temp - 35.75 * pow(speed, 0.16) + 0.4275 * temp * pow(speed, 0.16);
    cout << "The windchill factor is " << res;
}