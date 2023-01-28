#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
const int CANDIDATE_NUMBER = 5;
struct candidate{
    string lastName;
    int votes;
};
void printDetail(candidate list[], int totalVotes);
int main(){
    candidate list[CANDIDATE_NUMBER];
    int totalVotes = 0;
    for(int i = 0; i < 5; i++){ 
        cout << "enter the last name and the number of votes" << endl;
        cin >> list[i].lastName >> list[i].votes;
        totalVotes += list[i].votes;
    }
    printDetail(list, totalVotes);
    
    return 0;
}
void printDetail(candidate list[], int totalVotes){
    cout << "Candidate" << setw(16) << "Votes Received" << setw(16) << "percentage" << endl;
    candidate winner;
    winner.votes = 0;
    cout << fixed << showpoint << setprecision(2);
    for(int i = 0; i < CANDIDATE_NUMBER; i++){
        if(list[i].votes > winner.votes) winner = list[i];
        cout << setw(9) << list[i].lastName << setw(16) << list[i].votes << setw(16) << double(list[i].votes) * 100 / double(totalVotes) << endl;
    }
    cout << "Total" << setw(16) << totalVotes << endl;
    cout << "The winner of the election is " << winner.lastName;
}