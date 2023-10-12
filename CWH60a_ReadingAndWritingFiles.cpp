/* File I/O in C++: Reading and Writing Files | C++ Tutorials for Beginners #60
In this tutorial, we will discuss File I/O in C++: Reading and Writing Files

File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
    Using the constructor
    Using the member function open() of the class

An example program is shown below to demonstrate the concept of reading and writing files */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("CWH60a_sample.txt"); // Write operation
    out << st;
    return 0;
}