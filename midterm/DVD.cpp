#include "DVD.h"
#include <vector>
#include <string>
DVD::DVD(string n,vector<string> s, string p, string d, string c, int num)
{
    nameMovie = n;
    stars = s;
    nameProducer = p;
    director = d;
    company = c;
    number = num;
}
string DVD::getCompany(){
    return company;
}
string DVD::getDirector(){
    return director;
}
int DVD::getNumber(){
    return number;
}
int DVD::getRental(){
    return rental;
}
vector<string> DVD::getStars(){
    return stars;
}
string DVD::getProducer(){
    return nameProducer;
}
string DVD::getTitle(){
    return nameMovie;
}
void DVD::setTitle(string t){
    this->nameMovie = t;
}
void DVD::setProducer(string p){
    this->nameProducer = p;
}
void DVD::setStars(vector<string> s){
    this->stars = s;
}
void DVD::setDirector(string d){
    this->director = d;
}
void DVD::setCompany(string c){
    this->company = c;
}
void DVD::setNumber(int n){
    this->number = n;
}
void DVD::rent(){
    if(rental < number) rental++;
    else cout << "This DVD is not available now" << endl;
}
void DVD::returnDVD(){
    if(rental > 0) rental--;
    else cout << "This DVD is not needed to return " << endl;
}
void DVD::printInfo(){
    cout << "Title: " << nameMovie << endl;
    cout << "Stars: ";
    for (string star : stars) {
        cout << star << ", ";
    }
    cout << endl;
    cout << "Producer: " << nameProducer << endl;
    cout << "Director: " << director << endl;
    cout << "Production Company: " << company << endl;
    cout << "Number of copies: " << number << endl;
    cout << "Number of rentals: " << rental << endl;
}
DVD::~DVD()
{

}