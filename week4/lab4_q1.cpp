#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    for(int i = 0; i < 10; i++){
        vec.push_back(i + 1);
    }
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << *it << endl;
    }
    return 0;
}