#ifndef bookType_H
#define bookType_H
#include <string>
#pragma once

using namespace std;
class bookType
{
public:
    bookType();
    ~bookType();
    void printInfo() const;
    void setBookInfo(string title, string ISBN,  
      string Publisher, int PublishYear, 
      string auth[], double cost, int copies, 
      int noAuthors);
    void setBookTitle(string s); 
    void setBookISBN(string s);
    void setAuthor(int i, string auth); 
    void setBookPrice(double cost); 
    void setCopiesInStock(int noOfCopies); 
    void setPublisher(string pub);
 
    bool isISBN(string s) const; 
    bool isTitle(string s) const; 
    bool isAuthor(string s) const; 
 
    void getBookTitle(string& s) const; 
    void getBookISBN(string& s) const; 
    void getPublisher(string& s) const;
    int getQuantity() const;
    double getBookPrice() const; 
    void getAuthor(vector<string> & vec);
    bool isInStock() const; 
    void makeSale(); 
 
    void printBookPrice() const; 
    void printbookTitle() const; 
    void printbookTitleAndISBN() const; 
    void showQuantityInStock() const; 
    void updateQuantity(int addBooks);
private:
    string bookTitle; 
    string bookISBN; 
    string bookPublisher; 
 
    int bookPublishYear; 
    string authors[4]; 
 
    double price; 
    int quantity; 
 
    int noOfAuthors;
};

#endif