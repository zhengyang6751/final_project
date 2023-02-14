#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
const int NO_OF_ITEMS = 8;
const double TAX_RATE = 0.05;
struct menuItemType
{
    string menuItem;
    double menuPrice;
};
void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
void printCheck(menuItemType mList[], int choiceList[], int choicelistSize, int listSize);
int main()
{
    menuItemType menuList[NO_OF_ITEMS];
    int choiceList[NO_OF_ITEMS];
    int choiceListLength;
    ifstream inFile;
    cout << fixed << showpoint << setprecision(2);
    inFile.open("Menu_Data.txt");
    if (!inFile)
    {
        cout << "Cannot open the input file. Program Terminates!"
             << endl;
        return 1;
    }
    getData(inFile, menuList, NO_OF_ITEMS);
    showMenu(menuList, NO_OF_ITEMS);
    cout << "take your order(enter the number), 0 to end" << endl;
    int choice = 100;
    int i = 0;
    while(choice != 0){
        cin >> choice;
        choiceList[i] = choice;
        i++;
    }
    choiceListLength = i - 1;
    cout << choiceListLength;
    printCheck(menuList, choiceList, choiceListLength, NO_OF_ITEMS);
    return 0;
}
void getData(ifstream& inFile, menuItemType mList[], int listSize)
{
    char ch;
for (int i = 0; i < listSize; i++)
    {
        getline(inFile, mList[i].menuItem);
        inFile >> mList[i].menuPrice;
        inFile.get(ch);
    }
}
void showMenu(menuItemType mList[], int listSize)
{
    cout << "Welcome to Johnny's Resturant" << endl;
    cout << "----Today's Menu----" << endl;
    for (int i = 0; i < listSize; i++)
        cout << i+1 << ": " << left << setw(15) << mList[i].menuItem
             << " $" << mList[i].menuPrice << endl;
    cout << endl;
}
void printCheck(menuItemType mList[], int choiceList[], int choicelistSize, int listSize){
    cout << "Welcome to Johnny's Resturant" << endl;
    double totalPrice = 0;
    for(int i = 0; i < choicelistSize; i++){
        cout << choiceList[i] << ": " << left << setw(15) << mList[choiceList[i]-1].menuItem
             << " $" << mList[choiceList[i]-1].menuPrice << endl;
        totalPrice += mList[choiceList[i]-1].menuPrice;
    }
    double totalTax = totalPrice * TAX_RATE;
    totalPrice += totalTax;
    cout << "   "  << left << setw(15) << "tax" << right << " $" << totalTax << endl;
    cout << "   "  << left << setw(15) << "Amount Due"  << right << " $" << totalPrice << endl;
}