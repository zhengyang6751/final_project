#include "address.h"

address::address(int block, int unit, int floor, string street, string city, string country, int postalCode, Person person)
{
    this->block = block;
    this->floor = floor;
    this->postalCode = postalCode;
    this->country = country;
    this->city = city;
    this->street = street;
    this->unit = unit;
    this->person = person;
}
std::ostream& operator<<(std::ostream& os, address& address) {
    os << address.getBlock() << "-" << address.getUnit() << "-" << address.getFloor() << ", "
       << address.getStreet() << ", " << address.getCity() << ", " << address.getCountry() << ", "
       << address.getPostalCode() << ", " << address.getPerson();
    return os;
}
int address::getBlock() { return block; }
void address::setBlock(int block) { this->block = block; }

int address::getUnit() { return unit; }
void address::setUnit(int unit) { this->unit = unit; }

int address::getFloor() { return floor; }
void address::setFloor(int floor) { this->floor = floor; }

string address::getStreet(){ return street; }
void address::setStreet(std::string street) { this->street = street; }

string address::getCity() { return city; }
void address::setCity(std::string city) { this->city = city; }

string address::getCountry() { return country; }
void address::setCountry(std::string country) { this->country = country; }

int address::getPostalCode() { return postalCode; }
void address::setPostalCode(int postalCode) { this->postalCode = postalCode; }

string address::getPerson(){
    return (this->person).getFirstName() + " " + (this->person).getMiddleName() + " " + (this->person).getLastName();
};
void address::setPerson(Person person){
    this->person = person;
}
address::~address()
{

}