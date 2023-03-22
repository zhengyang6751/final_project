#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	// Declaring a multimap object
	multimap <string, int> myMap;

	// Inserting values into array
	myMap.insert(pair<string, int>("Alice", 100));
	myMap.insert(pair<string, int>("John", 200));
	myMap.insert(pair<string, int>("Jill", 300));
	myMap.insert(pair<string, int>("Tom", 50));
	myMap.insert(pair<string, int>("May", 10));
	myMap.insert(pair<string, int>("Alice", 50));

	// Defining an iterator called "it"
	multimap<string, int>::iterator it;

	for (it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout << it->first << " " << it->second << '\n';
	}

	// Finding the key's value
	cout << myMap.find("Tom")->second << endl;
	cout << myMap.find("Alice")->second << endl;

	system("PAUSE");
	return 0;
}