#include<bits/stdc++.h>
using namespace std;
float pi = 3.14159;
float area_of_segment(float radius,float angle)
{
    float area_of_sector=pi*(radius*radius)*(angle/360);
    float area_of_triangle=(float)1/2*(radius*radius)*sin((angle*pi)/180);
    return area_of_sector-area_of_triangle;
}
int main()
{
     float radius = 10.0, angle = 90.0;
    cout << "Area of minor segment = "
        << area_of_segment(radius, angle) << endl;

    cout << "Area of major segment = "
        << area_of_segment(radius, (360 - angle));
}
