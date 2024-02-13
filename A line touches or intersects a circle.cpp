#include<bits/stdc++.h>
using namespace std;
void checkCollision(int a,int b,int c,int x,int y,int radius)
{
    int dist=(abs(a*x+b*y+c))/sqrt(a*a+b*b);

      if (radius == dist)
        cout << "Touch" << endl;
    else if (radius > dist)
        cout << "Intersect" << endl;
    else
        cout << "Outside" << endl;
}
int main()
{
    int radius = 5;
    int x = 0, y = 0;
    int a = 3, b = 4, c = 25;
    checkCollision(a, b, c, x, y, radius);
    return 0;
}
