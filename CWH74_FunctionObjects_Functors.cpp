#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    {
        cout << "Sorting array's first 5 elements in ascending order: ";
        sort(arr, arr + 5);
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    {
        cout << "Sorting array's first 6 elements in descending order: ";
        sort(arr, arr + 6, greater<int>());
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
