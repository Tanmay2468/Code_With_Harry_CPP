#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    // int a = 4;
    // int *ptr = &a;
    // cout << "The value of a is " << *(ptr) << endl; // -->Output: The value of a is 4

    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a is " << *(ptr) << endl;

    // new operator
    // int *p = new int(40);
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    // Making arrays using new operator
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator
    int *ar = new int[3];
    ar[0] = 10;
    ar[1] = 20;
    ar[2] = 30;
    delete[] ar;
    cout << "The value of ar[0] is " << ar[0] << endl;
    cout << "The value of ar[1] is " << ar[1] << endl;
    cout << "The value of ar[2] is " << ar[2] << endl;
    /* Here value of ar[2] and further ar[3] and so on(if we increase size of ar) will be printed correctly bcz:
    Elements are not necessarily removed when you delete[] them.
    They are just made available to the system for re-use.
    Accessing them afterwards is not allowed (Undefined Behaviour).
    If your array had held objects with destructors then delete also causes destructors to be run before making the memory available for re-use. */

    return 0;
}