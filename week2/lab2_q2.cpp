#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int rever(int);
int main(){
    cout << rever(-567) << endl;
}
int rever(int num){
    int res = 0;
    bool negative = false;
    if(num < 0){
        negative = true;
        num = - num;
    }
    while(num != 0){
        res = res * 10 + num % 10;
        num /= 10;
    }
    if(negative) res = - res;
    return res;
}