#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool isVowel(char);
int main(){
    char ch;
    cout << "input a character" << endl;
    cin >> ch;
    bool test = isVowel(ch);
    cout << test << endl;
    return 0;
}

bool isVowel(char ch){
    /*
        Function: isVowel
        judge if a character is a vowel
        Parameters:
          ch - char
        Returns:
          boolean result
    */
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u') return true;
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U') return true;
    else return false;
}