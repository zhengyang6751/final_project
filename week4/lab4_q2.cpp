#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main(){
    stack<const char*> s;
    const char* str[10]= {"rose", "lily", "cynthia", "iris", "veronica", "ivy", "susan", "daphne", "violet", "garland"};
    for(int i = 0; i < 10; i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}