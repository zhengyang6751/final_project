#include "bookType.h"
#include <iostream>
#include <vector>
using namespace std;

bookType::bookType(){
    bookTitle = "";
    noOfAuthors = 0;
    bookPublisher = "";
    bookISBN = "";
    price = 0;
    quantity = 0;
    bookPublishYear = 0;
}

bookType::~bookType()
{

}

void bookType::printInfo() const
{ 
    int i; 
 
    cout << "Title: " << bookTitle << endl; 
    cout << "ISBN: " << bookISBN << endl; 
    cout << "Publisher: " << bookPublisher << endl; 
 
    cout << "Year of Publication: " << bookPublishYear << endl; 
 
    cout << "Number of Authors: " << noOfAuthors << endl; 
  
    cout << "Authors: "; 
    for (i = 0; i < noOfAuthors; i++) 
        cout << authors[i] << "; "; 
    cout << endl; 
 
    cout << "Price: " << price << endl; 
  
    cout << "Quantities in stock: " << quantity << endl;; 
 
} 
void bookType::setBookInfo(string title, string ISBN,  
      string Publisher, int PublishYear, 
      string auth[], double cost, int copies, 
      int authorCount) 
{ 
    int i; 
 
    bookTitle = title; 
    bookISBN = ISBN; 
    bookPublisher = Publisher; 
 
    bookPublishYear = PublishYear; 
 
    noOfAuthors = authorCount; 
 
    for (i = 0; i < noOfAuthors; i++) 
        authors[i] = auth[i]; 
 
    price = cost; 
    quantity = copies; 
} 
void bookType::setBookTitle(string s){
    bookTitle = s;
}
void bookType::setAuthor(int i, string auth){
    authors[i] = auth;
}
void bookType::setPublisher(string pub){
    bookPublisher = pub;
}
void bookType::setBookISBN(string s){
    bookISBN = s;
}
void bookType::setBookPrice(double cost){
    price = cost;
}
void bookType::setCopiesInStock(int noOfCopies){
    quantity = noOfCopies;
}
bool bookType::isISBN(string s) const{
    return bookISBN == s;
}
bool bookType::isTitle(string s) const{
    return bookTitle == s;
}
bool bookType::isAuthor(string s) const{
    return bookPublisher == s;
}

void bookType::getBookTitle(string& s) const{
    s = bookTitle;
} 
void bookType::getPublisher(string& s) const{
    s = bookPublisher;
}
void bookType::getAuthor(vector<string> & vec){
    
    for(int i = 0; i < noOfAuthors; i++){
        vec.push_back(authors[i]);
    }
}
void bookType::getBookISBN(string& s) const{
    s = bookISBN;
}
double bookType::getBookPrice() const{
    return price;
}
int bookType::getQuantity() const{
    return quantity;
}
bool bookType::isInStock() const{
    return quantity > 0;
} 
void bookType::makeSale(){
    quantity--;
} 

void bookType::printBookPrice() const{
    cout << "The book price is " << price << endl;
} 
void bookType::printbookTitle() const{
    cout << "The book title is " << bookPublisher << endl;
} 
void bookType::printbookTitleAndISBN() const{
    cout << "The book title is " << bookPublisher << endl;
    cout << "The ISBN is " << bookISBN << endl;
} 
void bookType::showQuantityInStock() const{
    cout << "The number of this book is " << quantity << endl;
} 
void bookType::updateQuantity(int addBooks){
    quantity += addBooks;
}