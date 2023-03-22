#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

//Default constructor
Person::Person()
{
	firstName = "John";
	middleName ="Jill";
	lastName = "James";
}

Person::Person(string fn, string mn, string ln) {
	firstName = fn;
	middleName = mn;
	lastName = ln;
}
bool Person::operator==(const Person& person)const{
	if(person.firstName == firstName && person.lastName == lastName && person.middleName == middleName) return true;
	else return false;
}

void Person::setFirstName(string fn) {
	firstName = fn;
}

void Person::setMiddleName(string mn) {
	middleName = mn;
}

void Person::setLastName(string ln) {
	lastName = ln;
}

void Person::setFullName(string fn, string mn, string ln) {
	firstName = fn;
	middleName = mn;
	lastName = ln;
}

string Person::getFirstName() {
	return firstName;
}

string Person::getMiddleName() {
	return middleName;
}

string Person::getLastName() {
	return lastName;
}


void Person::print() const {
	cout << "'s Name is " << firstName << " " <<
                   middleName << " " << lastName << endl;
}
