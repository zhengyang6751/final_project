#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    char arr[10000];
    int i = 0;
    cout << "input a string" << endl;
    cin >> arr;
    while(arr[i]){
        if(int(arr[i]) > 90) arr[i] -= 32;
        i++;
    }
    cout << arr;
    return 0;
}