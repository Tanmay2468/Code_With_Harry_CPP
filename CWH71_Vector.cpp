#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " "; // Both cout are same
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    // Ways to create a vector
    vector<int> vec1; // zero length int vector
    int element, size;
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1); // Display after push_back

    vec1.pop_back();
    display(vec1); // Display after pop_back

    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 5, 10); // insert()--> (iterator_posi,size,data)
    display(vec1);                // Display after insert

    vector<char> vec2(4); // 4-element empty char vector (Here 4 blanks will be visible which are there in display function)
    vec2.push_back('a');
    display(vec2);

    vector<char> vec3(vec2); // 4-element char vector from vec 2
    display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3's
    display(vec4);
    cout << vec4.size();

    return 0;
}