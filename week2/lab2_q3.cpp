#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string target;
    string res = "";
    cout << "input a string" << endl;
    getline(cin, target);
    for(int i = 0; i < target.length(); i++){
        switch (target[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            break;
        
        default:
            res.append(1, target[i]);
        }
    }
    cout << res << endl;;
    return 0;
}