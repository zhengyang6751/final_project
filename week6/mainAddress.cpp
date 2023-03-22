#include <string>
#include <iostream>
#include <vector>
#include "address.cpp"
using namespace std;
int main() {
    vector<address> addressBook;

    
    Person person1("John", "A", "Doe");
    address address1(123, 456, 7, "Main Street", "New York", "USA", 10001, person1);
    addressBook.push_back(address1);

    Person person2("Jane", "B", "Smith");
    address address2(456, 789, 10, "Park Avenue", "Los Angeles", "USA", 90001, person2);
    
    addressBook.push_back(address2);

    for (auto& a : addressBook) {
        cout << a << endl;
    }

    return 0;
}