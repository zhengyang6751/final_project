#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include "bookType.h"
#include "bookType.cpp"  
using namespace std;

int main()
{
    bookType books[100];
    
    string book1Author[2] = {"Bjarne Stroustrup", "jim Butter"};
    string book2Author[2] = {"Scott Meyers", "Tim cook"};
    string book3Author[1] = {"Bjarne Stroustrup"};
    string book4Authors[] = {"Joshua Bloch"};
    string book5Authors[] = {"Brian W. Kernighan", "Dennis M. Ritchie"};
    string book6Authors[] = {"Robert Martin"};
    string book7Authors[] = {"Martin Fowler", "Kent Beck", "John Brant", "William Opdyke", "Don Roberts"};
    string book8Authors[] = {"John D. Cook"};
    string book9Authors[] = {"Erich Gamma", "Richard Helm", "Ralph Johnson", "John Vlissides"};
    books[33].setBookInfo("Effective Java", "978-0134685991", "Addison-Wesley Professional", 2018, book4Authors, 39.99, 3, 1);
    books[44].setBookInfo("The C Programming Language", "978-0131103627", "Prentice Hall", 1988, book5Authors, 51.99, 6, 2);
    books[55].setBookInfo("Clean Code: A Handbook of Agile Software Craftsmanship", "978-0132350884", "Prentice Hall", 2008, book6Authors, 45.59, 4, 1);
    books[66].setBookInfo("Refactoring: Improving the Design of Existing Code", "978-0201485677", "Addison-Wesley Professional", 1999, book7Authors, 49.99, 2, 5);
    books[77].setBookInfo("A Primer on Scientific Programming with Python", "978-1466567584", "Chapman and Hall/CRC", 2014, book8Authors, 59.95, 7, 1);
    books[88].setBookInfo("Design Patterns: Elements of Reusable Object-Oriented Software", "978-0201633610", "Addison-Wesley Professional", 1994, book9Authors, 47.99, 5, 4);
    books[0].setBookInfo("The C++ Programming Language", "978-0321563842","Addison-Wesley Professional", 1989 , book1Author, 45.49, 10, 2);
    books[11].setBookInfo("Effective Modern C++", "978-1491903995" , "O'Reilly Media", 2000, book2Author, 18.98, 35, 2);
    books[99].setBookInfo("Programming: Principles and Practice Using C++","978-0321992789", "Addison-Wesley Professional", 2010, book3Author, 34.67, 48, 1);

    // search for a book by title
    string title = "Effective Modern C++";
    for (int i = 0; i < 100; i++) {
        if (books[i].isTitle(title)) {
            cout << "Found book with title \"" << title << "\"." << endl;
            break;
        }
    }

    // search for a book by ISBN
    string ISBN = "978-0321563842";
    for (int i = 0; i < 100; i++) {
        if (books[i].isISBN(ISBN)) {
            cout << "Found book with ISBN \"" << ISBN << "\"." << endl;
            break;
        }
    }
    // update the number of copies of a book
    title = "The C++ Programming Language";
    int numCopies = 5;
    for (int i = 0; i < 100; i++) {
        if (books[i].isTitle(title)) {
            books[i].updateQuantity(numCopies);
            books[i].makeSale();
            cout << "Updated number of copies of book with title \"" << title << "\" to " << books[i].getQuantity() << "." << endl;
            break;
        }
    }
    vector<bookType> vec;
    cout << vec.empty() << endl;
    vec.push_back(books[0]);
    vec.push_back(books[11]);
    vec.push_back(books[33]);
    vec.push_back(books[44]);
    for(vector<bookType>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << "                       " << endl;
        it->printInfo();
        cout << "                       " << endl;
    }
    vec.pop_back();
    vec.insert(vec.begin(), books[66]);
    cout << vec.empty() << endl;
    cout << vec.size() << endl;
    vector<string> author;
    vec.back().getAuthor(author);
    cout << author.back()<< endl;
    cout << "************************" << endl;


    stack<bookType> sta;
    cout << sta.empty() << endl;
    sta.push(books[0]);
    sta.top().printInfo();
    cout << "                       " << endl;
    sta.push(books[11]);
    sta.top().printInfo();
    cout << "                       " << endl;
    sta.push(books[33]);
    sta.top().printInfo();
    cout << "                       " << endl;
    sta.push(books[44]);
    sta.top().printInfo();
    cout << "                       " << endl;
    sta.pop();
    bookType remove = sta.top();
    vector<string> author2;
    cout << sta.size() << endl;
    remove.getAuthor(author2);
    cout << *author2.begin() <<endl;
    cout << "----------------" << endl;

    queue<bookType> que;
    cout << que.empty() << endl;
    que.push(books[0]);
    que.front().printInfo();
    cout << "                       " << endl;
    que.push(books[11]);
    que.back().printInfo();
    cout << "                       " << endl;
    que.push(books[33]);
    que.back().printInfo();
    cout << "                       " << endl;
    que.push(books[44]);
    que.back().printInfo();
    cout << "                       " << endl;
    que.pop();
    cout << que.front().getBookPrice() << endl;
    cout << que.back().getBookPrice() << endl;
    cout << que.size();
    
    return 0;
}