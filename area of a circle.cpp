#include <bits/stdc++.h>
const double pi = 3.14159265358979323846;
using namespace std;
float findArea(float r)
{
    float area=pi*r*r;
    return area;
}
int main()
{
    float r, Area;
    r = 5;
    Area = findArea(r);
    cout << "Area of Circle is :" << Area;
    return 0;
}
