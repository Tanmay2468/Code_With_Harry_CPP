#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int, int);
    friend void displayDistance(Point, Point);
};

void displayDistance(Point p1, Point p2)
{
    double dist = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    cout << "Distance between p1 and p2 is: " << setprecision(10) << dist << endl;
}

Point ::Point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    int x1, x2, y1, y2;
    cout << "Enter x and y co-ordinate of p1: ";
    cin >> x1 >> y1;
    Point p1(x1, y1);
    cout << "Enter x and y co-ordinate of p2: ";
    cin >> x2 >> y2;
    Point p2(x2, y2);
    displayDistance(p1, p2);
    return 0;
}