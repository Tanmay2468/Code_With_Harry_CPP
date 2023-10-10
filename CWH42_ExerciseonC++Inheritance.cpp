#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class simpleCalculator
{
protected:
    int x, y;

public:
    simpleCalculator(int no1, int no2)
    {
        x = no1;
        y = no2;
    }
    void display_sim()
    {
        cout << "x + y = " << x + y << endl;
        cout << "x - y = " << x - y << endl;
        cout << "x * y = " << x * y << endl;
        cout << "x / y = " << float(x )/ y<< endl;
    }
};

class scientificCalculator
{
protected:
    int x, y;

public:
    scientificCalculator(int no1, int no2)
    {
        x = no1;
        y = no2;
    }
    void display_sci()
    {
        cout << "sin (x) = " << sin(x) << endl;
        cout << "cos (x) = " << cos(x) << endl;
        cout << "tan (x) = " << tan(x) << endl;
        cout << "exp (x) = " << exp(x) << endl;
    }
};

class hybridCalculator : virtual public simpleCalculator, virtual public scientificCalculator
{
    int x;
    int y;
    public:
    hybridCalculator(int no1, int no2, int no3, int no4, int no5,int no6): simpleCalculator(no1, no2), scientificCalculator(no3, no4)
    {
        x = no5;
        y = no6;
    }
    void display()
    {
        display_sim();
        display_sci();
    }
};

int main()
{
    int x, y;
    cout << "Enter 2 numbers x and y: ";
    cin >> x >> y;
    hybridCalculator c1(x, y,x,y,x,y);
    c1.display();
    return 0;
}