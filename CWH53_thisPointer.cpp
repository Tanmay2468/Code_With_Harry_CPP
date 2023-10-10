#include <iostream>
using namespace std;

// class A
// {
//     int a;

// public:
//     A &setData(int a)
//     {
//         this->a = a;
//         return *this;  // *this returns an object of class A
//     }

//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };

// int main()
// {
//     // this is a keyword which is a pointer which points to the object which points to the member function
//     A a;
//     a.setData(4).getData();  // Here a.setData(4) is an object as *this returns an object so we can use '.getData()'
//     return 0;
// }

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which points to the member function
    A a;
    a.setData(4);
    a.getData();
    return 0;
}