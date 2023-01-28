#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip> 
using namespace std; 
const int NO_OR_STUDENTS = 20; 

struct studentType 
{ 
    string studentFName; 
    string studentLName; 
    int testScore; 
    char grade; 
}; 
 
void getData(ifstream& inFile, studentType sList[], int listSize); 
void calculateGrade(studentType sList[], int listSize); 
int highestTestscore(studentType sList[], int listSize);
void printHighestStudent(studentType sList[], int listSize, int highestScore);
int main() 
 
 
{ 
    ifstream inData; 
    ofstream outData; 
    studentType studentList[NO_OR_STUDENTS]; 
    int highest = 0;
    inData.open("Ch9_Ex2Data.txt"); 
    if (!inData) 
    { 
        cout << "The input file does not exist. Program terminates!" 
             << endl; 
        return 1; 
    } 
 
    getData(inData, studentList, NO_OR_STUDENTS); 
    calculateGrade(studentList, NO_OR_STUDENTS); 
    highest = highestTestscore(studentList, NO_OR_STUDENTS);
    cout << highest << endl;
    printHighestStudent(studentList, NO_OR_STUDENTS, highest);
    return 0; 
} 
 
void getData(ifstream& inFile, studentType sList[], int listSize) 
{ 
    for (int i = 0; i < listSize; i++) 
        inFile >> sList[i].studentFName >> sList[i].studentLName 
               >> sList[i].testScore; 
} 
 
void calculateGrade(studentType sList[], int listSize) 
{ 
    for (int i = 0; i < listSize; i++) 
    { 
        switch (sList[i].testScore / 10) 
        { 
        case 10:  
        case 9:  
            sList[i].grade = 'A'; 
            break; 
        case 8:  
            sList[i].grade = 'B'; 
            break; 
        case 7:  
            sList[i].grade = 'C'; 
            break; 
        case 6:  
            sList[i].grade = 'D'; 
            break; 
        case 5:  
        case 4:  
        case 3:  
        case 2:  
        case 1:  
        case 0:  
            sList[i].grade = 'F'; 
        } 
    } 
}
int highestTestscore(studentType sList[], int listSize){
    int highest = 0;
    for(int i = 0; i < listSize; i++){
        if (sList[i].testScore > highest) highest = sList[i].testScore;
    }
    return highest;
}
void printHighestStudent(studentType sList[], int listSize, int highestScore){
    for(int i = 0; i < listSize; i++){
        if(sList[i].testScore == highestScore) cout << sList[i].studentFName + " " << sList[i].studentLName << endl;
    }
}