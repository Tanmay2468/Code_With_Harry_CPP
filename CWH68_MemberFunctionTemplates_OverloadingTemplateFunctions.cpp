#include <iostream>
using namespace std;

// template <class T>
// class Harry
// {
// public:
//     T data;
//     Harry(T a)
//     {
//         data = a;
//     }
//     void display()
//     {
//         cout << data;
//     }
// };

// Member function templates
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data;
}

// Overloading template functions
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    // Member function templates
    Harry<float> h(5.7);
    cout << h.data << endl;
    h.display();
    cout << endl;

    // Overloading template functions
    func(4); // Exact match takes the highest priority
    func(4.7); // Exact match takes the highest priority
    return 0;
}