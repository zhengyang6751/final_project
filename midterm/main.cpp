#include "DVD.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void printAll(vector<DVD> &l);
DVD* search(vector<DVD> &l, string title, string producer);
void add(vector<DVD> &l);
void deleteDVD(vector<DVD> &l, string title, string producer);
void listAll(vector<DVD> &l);
void update(vector<DVD> &l, string title, string producer);
bool check(vector<DVD> &l, string title, string producer);
bool find(vector<DVD> &l, string title, string producer);
bool checkOutDVD(vector<DVD> &l, string title, string producer);
bool checkInDVD(vector<DVD> &l, string title, string producer);
void printMenu();
int main(){
    vector<DVD> list;
    printMenu();
    while(true){
        int choice;
        cout << "input your choice" << endl;
        cin >> choice;
        switch(choice){
            case 1: {
                string title;
                string producer;
                cout << "Enter the title of the DVD: ";
                cin >> title;
                cout << "Enter the producer of the DVD: ";
                cin >> producer;
                if (find(list, title, producer)) {
                    cout << "DVD is in the store." << endl;
                } else {
                    cout << "DVD is not in the store." << endl;
                }
                break;
            }
            case 2: {
                string title;
                string producer;
                cout << "Enter the title of the DVD to check-out: ";
                cin >> title;
                cout << "Enter the producer of the DVD to check-out: ";
                cin >> producer;
                checkOutDVD(list, title, producer);
                break;
            }
            case 3: {
                string title;
                string producer;
                cout << "Enter the title of the DVD to check in: ";
                cin >> title;
                cout << "Enter the producer of the DVD to check in: ";
                cin >> producer;
                checkInDVD(list, title, producer);
                break;
            }
            case 4: {
                string title;
                string producer;
                cout << "Enter the title of the DVD to check availability: ";
                cin >> title;
                cout << "Enter the producer of the DVD to check availability: ";
                cin >> producer;
                if (check(list, title, producer)) {
                    cout << "DVD is available for borrowing." << endl;
                } else {
                    cout << "DVD is not available for borrowing." << endl;
                }
                break;
            }
            case 5: {
                listAll(list);
                break;
            }
            case 6: {
                printAll(list);
                break;
            }
            case 7: {
                string title;
                string producer;
                cout << "Enter the title of the DVD to update from the list: ";
                cin >> title;
                cout << "Enter the producer of the DVD to update from the list: ";
                cin >> producer;
                update(list, title, producer);
                break;
            }
            case 8: {
                add(list);
                cin.ignore();
                break;
            }
            case 9: {
                string title;
                string producer;
                cout << "Enter the title of the DVD to remove from the list: ";
                cin >> title;
                cout << "Enter the producer of the DVD to remove from the list: ";
                cin >> producer;
                deleteDVD(list, title, producer);
                break;
            }
            case 10: {
                string title;
                string producer;
                cout << "Enter the title of the DVD to search from the list: ";
                cin >> title;
                cout << "Enter the producer of the DVD to search from the list: ";
                cin >> producer;
                DVD* d = search(list, title, producer);
                if(d != NULL) d->printInfo();
                break;
            }
            case 11: {
                cout << "Exiting the program." << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }
    return 0;
}
void printAll(vector<DVD> &l){
    for(DVD d : l ){
        d.printInfo();
        cout << "-------------" << endl;
    }
}
DVD* search(vector<DVD> &l, string title, string producer){
    for(DVD &d : l){
        if(d.getTitle() == title && d.getProducer() == producer){
            cout << "This is the info of the movie: " << endl;
            d.printInfo();
            return &d;
        }
    }
    cout << "not found" << endl;
    return NULL;
}
void add(vector<DVD> &l){
    cin.ignore();
    cout << "Enter DVD title: ";
    string title;
    getline(cin, title);
    cout << "Enter names of the stars (comma-separated): ";
    string starsInput;
    getline(cin, starsInput);
    vector<string> stars;
    string starName = "";
    for (char c : starsInput) {
        if (c == ',') {
            stars.push_back(starName);
            starName = "";
        } else {
            starName += c;
        }
    }
    stars.push_back(starName);
    cout << "Enter producer name: ";
    string producer;
    getline(cin, producer);
    cout << "Enter director name: ";
    string director;
    getline(cin, director);
    cout << "Enter production company name: ";
    string productionCompany;
    getline(cin, productionCompany);
    cout << "Enter number of copies: ";
    int numCopies;
    cin >> numCopies;
    cin.clear();
    DVD newDVD(title, stars, producer, director, productionCompany, numCopies);
    l.push_back(newDVD);
    cout << "DVD added successfully." << endl;
}
void deleteDVD(vector<DVD> &l, string title, string producer){
    for (int i = 0; i < l.size(); i++) {
            if (l[i].getTitle() == title && l[i].getProducer() == producer) {
                l.erase(l.begin() + i);
                cout << "DVD removed successfully!" << endl;
                return;
            }
        }
    cout << "DVD not found." << endl;
}
void listAll(vector<DVD> &l){
    for(DVD d : l){
        string name = d.getTitle();
        cout << name << endl;
    }
}
void update(vector<DVD> &l, string title, string producer){
    DVD* d = search(l, title, producer);
    if (d == nullptr) {
        cout << "DVD not found." << endl;
        return;
    }
    cout << "Enter the new details of the DVD: " << endl;

// Get new details of the DVD from the user
    string newTitle, newStars, newProducer, newDirector, newProductionCompany;
    int newCopies;
    cin.ignore();
    cout << "Enter the title: ";
    getline(cin, newTitle);

    cout << "Enter names of the stars (comma-separated): ";
    string starsInput;
    getline(cin, starsInput);
    vector<string> stars;
    string starName = "";
    for (char c : starsInput) {
        if (c == ',') {
            stars.push_back(starName);
            starName = "";
        } else {
            starName += c;
        }
    }
    stars.push_back(starName);

    cout << "Enter the producer: ";
    getline(cin, newProducer);

    cout << "Enter the director: ";
    getline(cin, newDirector);

    cout << "Enter the production company: ";
    getline(cin, newProductionCompany);

    cout << "Enter the number of copies: ";
    cin >> newCopies;
    cin.ignore();
    // Update the details of the DVD
    d->setTitle(newTitle);
    d->setStars(stars);
    d->setProducer(newProducer);
    d->setDirector(newDirector);
    d->setCompany(newProductionCompany);
    d->setNumber(newCopies);

    cout << "DVD details updated." << endl;
    return;
    cout << "Not found" << endl;
}
bool check(vector<DVD> &l, string title, string producer){
    for(DVD d : l){
        if(d.getTitle() == title && d.getProducer() == producer){
            if(d.getNumber() > d.getRental()){
                cout << "Still available" << endl;
                return true;
            }
            else cout << "Not available" << endl;
            return false;
        }
    }
    cout << "DVD not found" << endl;
    return false;
}
void printMenu() {
    cout << "Menu Options: " << endl;
    cout << "1. Check if a DVD exists in the store" << endl;
    cout << "2. Check-out a DVD" << endl;
    cout << "3. Check in a DVD" << endl;
    cout << "4. Check whether a particular DVD is available for borrowing" << endl;
    cout << "5. List all the titles of the DVDs in the store" << endl;
    cout << "6. Print all details of the DVDs in the store" << endl;
    cout << "7. Update details of a particular DVD" << endl;
    cout << "8. Add a new DVD to the list of DVDs" << endl;
    cout << "9. Remove a DVD from the list of DVDs" << endl;
    cout << "10. Search for a DVD, given the title of the DVD and print details" << endl;
    cout << "11. Exit" << endl;
}
bool find(vector<DVD> &l, string title, string producer){
    for(DVD &d : l){
        if(d.getTitle() == title && d.getProducer() == producer){
            return true;
        }
    }
    return false;
}
bool checkOutDVD(vector<DVD> &l, string title, string producer){
    for(DVD &d : l){
        if(d.getTitle() == title && d.getProducer() == producer){
            d.rent();
            return true;
        }
    }
    return false;
}
bool checkInDVD(vector<DVD> &l, string title, string producer){
    for(DVD &d : l){
        if(d.getTitle() == title && d.getProducer() == producer){
            d.returnDVD();
            return true;
        }
    }
    return false;
}