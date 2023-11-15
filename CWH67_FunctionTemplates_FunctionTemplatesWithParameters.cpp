#include <iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg= (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg= (a+b)/2.0;
//     return avg;
// }

template <class T1 = int, class T2 = float>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a = funcAverage(5, 2.5555);
    printf("The average of these numbers is %f", a);
    cout << endl;
    // float b = funcAverage2(5,6.7);
    // printf("The average of these numbers is %f\n",b);

    char c = 't', d = 'u';
    swapp(c, d);
    cout << c << endl
         << d;
    return 0;
}