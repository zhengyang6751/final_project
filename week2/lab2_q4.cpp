#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double arr[50];
    for(int i = 0; i < 50 ; i++){
        if(i < 25) arr[i] = i * i;
        else arr[i] = 3 * i;
    }
    for(int i = 0; i < 50; i++){
        cout << setw(4) << arr[i] << ' ';
        if(i % 10 == 9) cout << endl;
    }

}