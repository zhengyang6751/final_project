#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
const double CARTON_CAPACITY = 3.78;
const double COST_OF_ONE_LITER = 0.38;
const double PROFIT_ON_A_CARTON = 0.27;

const double TAX = 0.14;
const double CLOTHES_AND_ACC = 0.10;
const double SCHOOL_SUPPLIES = 0.01;
const double SAVINGS_BONDS = 0.25;
const double PARENTS_BONDS = 0.50;

const double SAVING_SERV_CHARGES = 10.00;
const double SAVING_INTEREST_RATE = 0.04;
const double CHECKING_SERV_CHARGES = 25.00;
const double CHECKING_INT_RATE_REG = 0.03;
const double CHECKING_INT_RATE_OVER_5000 = 0.05;
const double CHECKING_HIGH_BALANCE = 5000.00;

int main()
{   
    // question1
    int time_seconds;
    cout << "input the elapsed time" << endl;
    cin >> time_seconds;
    string hour = to_string(time_seconds / 3600);
    string minutes = to_string((time_seconds % 3600) / 60);
    string seconds = to_string(time_seconds % 3600 % 60);
    if(stoi(hour) < 10){
        hour = "0" + hour;
    }
    if(stoi(minutes) < 10){
        minutes = "0" + minutes;
    }
    if(stoi(seconds) < 10){
        seconds = "0" + seconds;
    }
    cout << "the input time is " << time_seconds << " and it can be transformed to " << hour << ":"<< minutes << ":" << seconds << endl;

    // question2
    double milkQuantity;
    int noOfMilkCartons;
    double totalCostOfMilk;
    double profit;
    cout << "Enter, in liters, the total quantity of milk \
    produced: ";
    cin >> milkQuantity;
    cout << endl;
    noOfMilkCartons = static_cast<int> (milkQuantity / \
    CARTON_CAPACITY + 0.5);
    totalCostOfMilk = milkQuantity * COST_OF_ONE_LITER;
    profit = noOfMilkCartons * PROFIT_ON_A_CARTON;
    cout << "The number of milk cartons needed to hold milk: " 
         << noOfMilkCartons << endl;
    cout << "The cost of producing milk: $" 
         << totalCostOfMilk << endl;
    cout << "Profit: $" 
         << profit << endl;
    // question3
    double payRate;
    double hoursWorkedWeek1, hoursWorkedWeek2, hoursWorkedWeek3,
           hoursWorkedWeek4, hoursWorkedWeek5;
    double totalHoursWorked;
    double totalIncome;
    double netIncome;
    double costOfClothesAndAcc;
    double costOfSchoolSupplies;
    double costOfSavingsBonds;
    double savingsBondsFromParents;

	cout << "Enter the per hour pay rate: ";
	cin >> payRate;
	cout << endl;

	cout << "Enter the number of hours worked for week 1: ";
	cin >> hoursWorkedWeek1;
	cout << endl;

	cout << "Enter the number of hours worked for week 2: ";
	cin >> hoursWorkedWeek2;
	cout << endl;

	cout << "Enter the number of hours worked for week 3: ";
	cin >> hoursWorkedWeek3;
	cout << endl;

    cout << "Enter the number of hours worked for week 4: ";
	cin >> hoursWorkedWeek4;
	cout << endl;

    cout << "Enter the number of hours worked for week 5: ";
	cin >> hoursWorkedWeek5;
	cout << endl;

    totalHoursWorked = hoursWorkedWeek1 + hoursWorkedWeek2 
                      + hoursWorkedWeek3 + hoursWorkedWeek4
                      + hoursWorkedWeek5;

    totalIncome = totalHoursWorked * payRate;
    netIncome = totalIncome * (1 - TAX);
    costOfClothesAndAcc = netIncome * CLOTHES_AND_ACC;
    costOfSchoolSupplies = netIncome * SCHOOL_SUPPLIES;
    costOfSavingsBonds = (netIncome - costOfClothesAndAcc - costOfSchoolSupplies) 
                         * SAVINGS_BONDS;
    savingsBondsFromParents = costOfSavingsBonds * PARENTS_BONDS;

    cout << "Total Income before tax: $ " << totalIncome << endl;
    cout << "Net Income: $ " << netIncome << endl;
    cout << "Money spent on clothes and other accessories: $ "
         << costOfClothesAndAcc << endl;
    cout << "Money spent on school supplies: $ "
         << costOfSchoolSupplies << endl;
    cout << "Money spent to buy savings bonds: $ "
         << costOfSavingsBonds << endl;
    cout << "Money spent by parents to buy additional savings bonds: $ "
         << savingsBondsFromParents << endl;

    // question4

    int accountNo;
	char accountType;
	double minimumBalance;
	double balance;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter account number, account type, " 
         << "minumum balance, and balance" << endl;
	cin >> accountNo >> accountType >> minimumBalance >> balance;

	cout << "Account Number: " << accountNo << endl;
	cout << "Account Type: " << accountType << endl;
	cout << "Begining Balance: $" << balance << endl;

	if (accountType == 's' || accountType == 'S')
	{
		if (balance >= minimumBalance)
			balance = balance + balance * SAVING_INTEREST_RATE;
		else
			balance = balance - SAVING_SERV_CHARGES;
		
		cout << "New Balance: " << balance << endl;
	}
	else if (accountType == 'c' || accountType == 'C')
	{
        if (balance >= minimumBalance)
            if (balance <= minimumBalance + CHECKING_HIGH_BALANCE)
                balance = balance + balance * CHECKING_INT_RATE_REG;
            else
                balance = balance + balance * CHECKING_INT_RATE_OVER_5000;
        else
            balance = balance - CHECKING_SERV_CHARGES;
			
        cout << "New Balance: $" << balance << endl;
    }
    else
        cout << "Invalid account type" << endl;
    
    // question5
    char letter;
    int counter = 0;
    
    cout << "Program to convert letters to their corresponding telephone digits" << endl;
    
    while (cin.get(letter) && counter < 7 ) {
        
        if (letter != ' ' && letter >= 'A' && letter <= 'z') {
            counter++; // Only increment the counter for valid characters
            if (letter > 'Z') {
                letter = (int)letter-32; // Convert lowercase to uppercase if required.
            }
            
            if (counter == 4) {
                cout << "-"; // Print the hyphen when required
            }
            
            switch (letter) {
                case 'A':
                case 'B':
                case 'C':
                    cout << "2";
                    break;
                case 'D':
                case 'E':
                case 'F':
                    cout << "3";
                    break;
                case 'G':
                case 'H':
                case 'I':
                    cout << "4";
                    break;
                case 'J':
                case 'K':
                case 'L':
                    cout << "5";
                    break;
                case 'M':
                case 'N':
                case 'O':
                    cout << "6";
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    cout << "7";
                    break;
                case 'T':
                case 'U':
                case 'V':
                    cout << "8";
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout << "9";
                    break;
                default:
                    break;
            }
        }
        
    }
    // question6
    string num_set;
    int num_odd = 0;
    int num_even = 0;
    cout << "input a set of numbers" << endl;
    cin >> num_set;
    for(int i = 0; i < num_set.size(); i++){
        if (num_set[i] % 2 == 0) num_odd += (num_set[i] - '0');
        else num_even += (num_set[i] - '0');
    }
    cout << "The sum of even number is" << num_even << endl;
    cout << "The sum of odd number is" << num_odd << endl;
}