#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{

    int cx, cy, lx1, lx2, ly1, ly2;
    float slope, intercept, cr;
    cout << "Enter centerX centerY radius:";
    cin >> cx >> cy >> cr;
    Circle c(cx, cy, cr);
    cout << "\nEnter Line X1 Y1 X2 Y2: ";
    cin >> lx1 >> ly1 >> ly1 >> ly2;
    c.isTangent(lx1, ly1, lx2, ly2) ? cout << "\nTangent" : cout << "\nNot Tangent";
    cout << "\nEnter slope and intercept :";
    cin >> slope >> intercept;
    c.isTangent(slope, intercept) ? cout << "\nTangent" : cout << "\nNot Tangent";
}