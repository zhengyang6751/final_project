#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include "Date.h"
#include "Time.h"
#include "Date.cpp"
#include "Time.cpp"
#include <vector>
using namespace std;
typedef struct{
Date d;
Time t;
double temp;
double AHumid;
double RHumid;
} AirQuality;
ostream & operator <<( ostream & osObject, const AirQuality & A1 );
double getAverageTemp(vector<AirQuality> AirLog);
double getAverageTemp(vector<AirQuality> AirLog, int month);
double getAverageAbsHumid(vector<AirQuality> AirLog);
double getAverageAbsHumid(vector<AirQuality> AirLog, int month);
double getAverageRelHumid(vector<AirQuality> AirLog);
double getAverageRelHumid(vector<AirQuality> AirLog, int month);
double DisplayTempAndRelHumid(vector<AirQuality> AirLog);
double getHighestTemp(vector<AirQuality> AirLog);
double getHighestAbsHumid(vector<AirQuality> AirLog);
double getHighestRelHumid(vector<AirQuality> AirLog);
void DisplayHigherTemp(vector<AirQuality> AirLog);
void DisplayHigherAbsHumid(vector<AirQuality> AirLog);
void DisplayHigherRelHumid(vector<AirQuality> AirLog);
vector<AirQuality> getAirLog(string filename);
void menu();
int main()
{
    string filename = "AirQualityUCI.csv";
    
    vector<AirQuality> AirLog = getAirLog(filename);
    menu();
    int choice = 0;
    cin >> choice;
    while(choice != 0){
        double averageTemp = 0;
        double averageAbsHumid = 0;
        double averageRelHumid = 0;
        double highestTemp = 0;
        double highestAbsHumid = 0;
        double highestRelHumid = 0;
        switch(choice){
            case 1:
                averageTemp = getAverageTemp(AirLog);
                cout << "Average temperature: " << averageTemp << endl;
                break;
            case 2:
                averageAbsHumid = getAverageAbsHumid(AirLog);
                cout << "Average absolute humidity: " << averageAbsHumid << endl;
                break;
            case 3:
                averageRelHumid = getAverageRelHumid(AirLog);
                cout << "Average relative humidity: " << averageRelHumid << endl;
                break;
            case 4:
                DisplayTempAndRelHumid(AirLog);
                break;
            case 5:
                highestTemp = getHighestTemp(AirLog);
                cout << "Highest temperature: " << highestTemp << endl;
                break;
            case 6:
                highestAbsHumid = getHighestAbsHumid(AirLog);
                cout << "Highest absolute humidity: " << highestAbsHumid << endl;
                break;
            case 7:
                highestRelHumid = getHighestRelHumid(AirLog);
                cout << "Highest relative humidity: " << highestRelHumid << endl;
                break;
            case 8:
                DisplayHigherTemp(AirLog);
                break;
            case 9:
                DisplayHigherAbsHumid(AirLog);
                break;
            case 10:
                DisplayHigherRelHumid(AirLog);
                break;
            case 11:
                cout << "exit" << endl;
                choice = 0;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
        
        if(choice != 0) {
            menu();
            cin >> choice;
    }
    }

    return 0;
}
ostream & operator <<( ostream & osObject, const AirQuality & W1 )
{
osObject<<W1.d<<W1.t<<W1.temp<<W1.AHumid<<W1.RHumid;
return osObject;
}
double getAverageTemp(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter month to get average temperature:" << endl;
    int month = 0;
    cin >> month;
    double avgTemp = 0;
    int count = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                avgTemp += it->temp;
                count++;
            }
    }
    return double(avgTemp)/count;
}
double getAverageTemp(vector<AirQuality> AirLog, int month){
    vector<AirQuality>::iterator it;
    double avgTemp = 0;
    int count = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                avgTemp += it->temp;
                count++;
            }
    }
    return double(avgTemp)/count;
}
double getAverageAbsHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter month to get average absolute humidity:" << endl;
    int month = 0;
    cin >> month;
    double avgAHumid = 0;
    int count = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                avgAHumid += it->AHumid;
                count++;
            }
    }
    return double(avgAHumid)/count;
}
double getAverageAbsHumid(vector<AirQuality> AirLog, int month){
    vector<AirQuality>::iterator it;
    double avgAHumid = 0;
    int count = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                avgAHumid += it->AHumid;
                count++;
            }
    }
    return double(avgAHumid)/count;
}
double getAverageRelHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter month to get average relative humidity:" << endl;
    int month = 0;
    cin >> month;
    double avgRHumid = 0;
    int count = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                avgRHumid += it->RHumid;
                count++;
            }
    }
    double res = double(avgRHumid)/count;
    return res;
}
double getAverageRelHumid(vector<AirQuality> AirLog, int month){
    vector<AirQuality>::iterator it;
    double avgRHumid = 0;
    int count = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                avgRHumid += it->RHumid;
                count++;
            }
    }
    return double(avgRHumid)/count;
}
double DisplayTempAndRelHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a date and time to get the temperature and relative humidity:" << endl;
    int day , month, year, hour, min, sec;
    cin >> day >> month >> year >> hour >> min >> sec;
    Date d1(day, month, year);
    Time t1(hour, min, sec);
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d == d1 && it->t == t1)
            {
                cout << "Temperature: " << it->temp << endl;
                cout << "Relative Humidity: " << it->RHumid << endl;
            }
    }
    return 0;
}
double getHighestTemp(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a month to get the highest temperature:" << endl;
    int month = 0;
    cin >> month;
    double maxTemp = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                if(it->temp > maxTemp){
                    maxTemp = it->temp;
                    
                }
                    
            }
    }
    return maxTemp;
}
double getHighestRelHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a month to get the highest relative humidity:" << endl;
    int month = 0;
    cin >> month;
    double maxRHumid = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                if(it->RHumid > maxRHumid){
                    maxRHumid = it->RHumid;
                    
                }
                    
            }
    }
    return maxRHumid;
}
double getHighestAbsHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a month to get the highest absolute humidity:" << endl;
    int month = 0;
    cin >> month;
    double maxAHumid = 0;
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                if(it->AHumid > maxAHumid){
                    maxAHumid = it->AHumid;
                    
                }
                    
            }
            
    }
    
    return maxAHumid;
}
void DisplayHigherTemp(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a month to get the dates and times when the temperature is higher than average:" << endl;
    int month = 0;
    cin >> month;
    double avgTemp = getAverageTemp(AirLog, month);
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                if(it->temp > avgTemp){
                    cout << it->d << it->t;
                    cout << "Temperature: " << it->temp << endl;
                    cout << endl;
                }
                    
            }
    }
    cout << "Average temperature: " << avgTemp << endl;
}
void DisplayHigherRelHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a month to get the dates and times when the relative humidity is higher than average:" << endl;
    int month = 0;
    cin >> month;
    double avgRHumid = getAverageRelHumid(AirLog, month);
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                if(it->RHumid > avgRHumid){
                    cout << it->d << it->t << endl;
                    cout << "Relative Humidity: " << it->RHumid << endl;
                }
                    
            }
    }
    cout << "Average relative humidity: " << avgRHumid << endl;
}
void DisplayHigherAbsHumid(vector<AirQuality> AirLog){
    vector<AirQuality>::iterator it;
    cout << "Enter a month to get the dates and times when the absolute humidity is higher than average:" << endl;
    int month = 0;
    cin >> month;
    double avgAHumid = getAverageAbsHumid(AirLog, month);
    for (it = AirLog.begin(); it != AirLog.end(); ++it) {
        if(it->d.GetMonth() == month)
            {
                if(it->AHumid > avgAHumid){
                    cout << it->d << it->t << endl;
                    cout << "Absolute Humidity: " << it->AHumid << endl;
                }
                    
            }
    }
    cout << "Average absolute humidity: " << avgAHumid << endl;
}
vector<AirQuality> getAirLog(string filename){
    vector<AirQuality> AirLog;
    string line, sDay, sMonth, sYear,sHH, sMM, sSS, temp, AHumid, RHumid;
    ifstream input;
    input.open(filename);
    input.ignore(124,'\n');
    int times = 0;
    while(getline(input, line)){

        getline(input, line, ';');
        
        sDay=line.substr(0,2);
        
        sMonth=line.substr(3,2);
        
        sYear=line.substr(6,10);
        
        getline(input, line, ';');
        
        sHH=line.substr(0,2);
        
        sMM=line.substr(3,2);
        
        sSS=line.substr(6,2);
        
        int time = 10;
        while(time > 0)
        {
            getline(input, line, ';');
            
            time--;
        }
        string str1;
        
        getline(input, str1, ';');
        if(str1 == "-200"){
            times++;
            continue;
        }
        string str2;
        string temp;
        size_t pos = str1.find(",");
        while (pos != string::npos) {  // 将所有逗号替换为小数点
            str1.replace(pos, 1, ".");
            pos = str1.find(",");
        }
        temp = str1;
        getline(input, line, ';');

        pos = line.find(",");
        while (pos != string::npos) {  // 将所有逗号替换为小数点
            line.replace(pos, 1, ".");
            pos = line.find(",");
        }
        AHumid = line;
        getline(input, line, ';');
        
        
        pos = line.find(",");
        while (pos != string::npos) {  // 将所有逗号替换为小数点
            line.replace(pos, 1, ".");
            pos = line.find(",");
        }
        RHumid = line;
        
        
        int day1=stoi(sDay);
        
        int month1=stoi(sMonth);
        
        int year1=stoi(sYear);
        
        int hour1=stoi(sHH);
        
        int min1=stoi(sMM);
        
        int sec1=stoi(sSS);
        
        
        AirQuality T1;//create a record
        T1.d.SetDate(day1,month1,year1);
        T1.t.SetTime(hour1,min1, sec1);
        T1.temp=stof(temp);
        T1.AHumid=stof(AHumid);
        T1.RHumid=stof(RHumid);
        AirLog.push_back(T1);
        input.ignore(1,'\n');
    }
        
    input.close();
    return AirLog;
}
void menu(){
    cout << "1. Get the average temperature for a month" << endl;
    cout << "2. Get the average relative humidity for a month" << endl;
    cout << "3. Get the average absolute humidity for a month" << endl;
    cout << "4. Display the highest temperature, relative humidity for a specific date and time" << endl;
    cout << "5. Get the highest temperature for a month" << endl;
    cout << "6. Get the highest relative humidity for a month" << endl;
    cout << "7. Get the highest absolute humidity for a month" << endl;
    cout << "8. Get the dates and times when the temperature is higher than average for a month" << endl;
    cout << "9. Get the dates and times when the absolute humidity is higher than average for a month" << endl;
    cout << "10. Get the dates and times when the relative humidity is higher than average for a month" << endl;
    cout << "11. Exit" << endl;
}