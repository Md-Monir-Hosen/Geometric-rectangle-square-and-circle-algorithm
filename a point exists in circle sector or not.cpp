#include<bits/stdc++.h>
using namespace std;
void checkPoint(int radius,int x,int y,float percent,float startAngle)
{
    float endAngle=360/percent+startAngle;
    float polarradius=sqrt(x*x+y*y);
    float Angle=atan(y/x);

    if (Angle>=startAngle && Angle<=endAngle && polarradius<radius)
        cout<<"Point ("<<x<<","<<y<<")exist in the circle sector\n";
    else
        cout<<"Point ("<<x<<"," <<"y"<<") does not exist in the circle sector\n";
}
int main()
{
     int radius = 8, x = 3, y = 4;
    float percent  = 12, startAngle = 0;
    checkPoint(radius, x, y, percent, startAngle);
    return 0;
}
