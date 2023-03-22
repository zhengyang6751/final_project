#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include "Person.cpp"
#pragma once
using namespace std;
class address
{
public:
    address(int block, int unit, int floor, string street, string city, string country, int postalCode, Person person);
    friend std::ostream& operator<<(std::ostream& os, const address& address);
    int getBlock();
    void setBlock(int block);

    int getUnit();
    void setUnit(int unit);

    int getFloor();
    void setFloor(int floor);

    string getStreet();
    void setStreet(string street);

    string getCity();
    void setCity(string city);

    string getCountry();
    void setCountry(string country);

    int getPostalCode();
    void setPostalCode(int postalCode);

    string getPerson();
    void setPerson(Person person);
    ~address();

private:
    int block;
    int unit;
    int floor;
    string street;
    string city;
    string country;
    int postalCode;
    Person person;
};

#endif