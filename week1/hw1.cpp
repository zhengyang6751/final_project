#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const int FIXED_ROYALTIES = 25000;
const double RATE2 = 0.125;
const double RATE3 = 0.1;
const double RATE4 = 0.14;
double option2(int, double);
double option3(int, double);
int main(){
    // question1
    cout << fixed << showpoint << setprecision(2);
    double radius = 0, height = 0, volume = 0, side = 0;
    cout << "input the radius of the base \
and the height of a cylindrical container " << endl;
    cin >> radius >> height;
    volume = M_PI * radius * radius * height;
    side = cbrt(volume);
    cout << "The side of the cube is " << side << endl;
    
    // question2
    double length = 0, radius2 = 0, space = 0, total_space = 0;
    int number = 0;
    cout << "input the following: \
a. The length of the yard. \
b. The radius of a fully grown tree. \
c. The required space between fully grown trees." << endl;
    
    cin >> length >> radius2 >> space;
    number = (length + space) / (2 * radius2 + space);
    total_space = number * M_PI * radius2 * radius2;
    cout << "The number is " << number << endl;
    cout << "The occupied space is " << total_space << endl;
    
    // question3
    int population_a = 0, population_b = 0, year = 0;
    double rate1 = 0, rate2 = 0;
    cout << "The population of a town A is less than the population of town B. \
However, the population of town A is growing faster than the population \
of town B. Enter the population and growth rate of each town" << endl;
    cout << "A's population and B's population:" << endl;
    cin >> population_a >> population_b;
    cout << "A's growth rate and B's growth rate in floating number" << endl;
    cin >> rate1 >> rate2;
    while(population_a < population_b){
        population_a *= (1 + rate1 / 100);
        population_b *= (1 + rate2 / 100);
        year++;
    }
    cout << year <<" years are needed" << endl;
    cout << "For town A: " << population_a << endl;
    cout << "For town B: " << population_b << endl;
    
    // question4
    int prime[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int num = 0, count = 0;
    while(num < 1 || num > 1000){
        cout << "input a number from 1 to 1000" << endl;
        cin >> num;
    }
    for(int i = 0; i < 11; i++){
        if(num % prime[i] == 0) {
            cout << "It is not prime cause it can be divided by " << prime[i] << endl;
            count++;
    }
    }
    if(count == 0) cout << "It is a prime number" << endl;
    
    // question5
    int number2 = 0;
    double price = 0;
    double royalties2 = 0;
    double royalties3 = 0;
    cout << " Enter the net price of each copy of the novel and the \
estimated number of copies that will be sold" << endl;
    cin >> price >> number2;
    royalties2 = option2(number2, price);
    royalties3 = option3(number2, price);
    cout << "option1 :" << FIXED_ROYALTIES << endl;
    cout << "option2 :" << royalties2 << endl;
    cout << "option3 :" << royalties3 << endl;
    if(FIXED_ROYALTIES > royalties2 && FIXED_ROYALTIES > royalties3){
        cout << "so choose option1";
    }
    else if(royalties2 > FIXED_ROYALTIES && royalties2 > royalties3){
        cout << "so choose option2";
    }
    else cout << "so choose option3";
    return 0;


}
double option2(int number, double price){
    double money = number * price * RATE2;
    return money;
}
double option3(int number, double price){
    double money1 = number * price * RATE3;
    double money2 = (number - 4000) * price * RATE4;
    if(number <= 4000) {
        return money1;
    }
    else{
        double money3 = 4000 * price * RATE3;
        return money3 + money2;
    }
}