#ifndef DVD_H
#define DVD_H

#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class DVD
{
public:
    DVD(string n,vector<string> s, string p, string d, string c, int num);
    void setTitle(string t);
    void setProducer(string p);
    void setStars(vector<string> s);
    void setDirector(string d);
    void setCompany(string c);
    void setNumber(int n);
    string getTitle();
    string getProducer();
    vector<string> getStars();
    string getCompany();
    int getNumber();
    int getRental();
    string getDirector();
    void rent();
    void returnDVD();
    void printInfo();
    ~DVD();

private:
    string nameMovie;
    vector<string> stars;
    string nameProducer;
    string director;
    string company;
    int number;
    int rental = 0;
};

#endif