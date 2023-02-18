#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;
stack<double> res;
char operation;
double number;
double operand1;
double operand2;
double result;
int check = 1;
char GameChecker = 'y';
void calculator();
int main(){
    while(GameChecker == 'y'){
        calculator();
        cout << "Do you want to continue calculating?(y for continue, n for quit)" << endl;
        cin >> GameChecker;
    }
    return 0;
}
void calculator(){
    cout << "Do you want to input the operand?(1 for continue, 0 to quit)" << endl;
    cin >> check;
    while(check == 1){
        cout << "input the operand" << endl;
        cin >> number;
        res.push(number);
        cout << "Do you want to continuing input?(1 for continue, 0 to quit)" << endl;
        cin >> check;
    }
    cin.clear();
    cout << "input the operation you want" << endl;
    cin >> operation;
    switch(operation){
        case '+':
            operand1 = res.top();
            res.pop();
            operand2 = res.top();
            res.pop();
            result = operand1 + operand2;
            res.push(result);
            break;
        case '-':
            operand1 = res.top();
            res.pop();
            operand2 = res.top();
            res.pop();
            result = operand2 - operand1;
            res.push(result);
            break;
        case '*':
            operand1 = res.top();
            res.pop();
            operand2 = res.top();
            res.pop();
            result = operand1 * operand2;
            res.push(result);
            break;
        case '/':
            operand1 = res.top();
            res.pop();
            operand2 = res.top();
            res.pop();
            result = operand2 / operand1;
            res.push(result);
            break;
    }
    check = 1;
    cout << res.top() << endl;
}