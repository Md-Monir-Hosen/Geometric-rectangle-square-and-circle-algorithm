#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
float areacircumscribed(float a)
{
    return (a*a*(PI/2));
}
int main()
{
     float a = 6;
    cout<<" Area of an circumscribed circle is : "
           <<areacircumscribed(a);
    return 0;
}
