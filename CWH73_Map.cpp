#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // Map is an associative array
    // Map gets sorted according to it's key value
    map<string, int> marksMap; // Syntax: map<key, value> mapName

    // Insertion method 1 in map
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    // Insertion method 2 in map
    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is: " << marksMap.size();
    cout << "The max size is: " << marksMap.max_size();
    cout << "The empty's return value is: " << marksMap.empty(); // Checks whether map is empty

    return 0;
}