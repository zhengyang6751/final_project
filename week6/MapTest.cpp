#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	// Declaring a map object
	multimap <string, int> myMap;

	// Inserting values into array
	myMap.insert(pair<string, int>("John", 200));
	myMap.insert(pair<string, int>("John", 300));
	myMap.insert(pair<string, int>("Tom", 50));
	myMap.insert(pair<string, int>("May", 10));

	// Defining an iterator called "it"
	map<string, int>::iterator it; 

	for (it = myMap.begin(); it != myMap.end(); it++)
	{
		cout << it->first << " " << it->second << '\n';
	}

	system("PAUSE");
	return 0;
}