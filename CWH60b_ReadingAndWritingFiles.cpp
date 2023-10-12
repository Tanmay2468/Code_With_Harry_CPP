#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st2;
    // Opening files using constructor and reading it
    ifstream in("CWH60b_sample.txt"); // Read operation
    // in >> st2;  // This will read only 1st word before space( ).
    getline(in, st2);  // This will read complete 1st line.
    // getline(in, st2);  // This will read 2nd line.
    cout << st2;

    return 0;
}