#include<bits/stdc++.h>
using namespace std;
int minRadius(int k,int x[],int y[],int n)
{
    int dis[n];
    for(int i=0;i<n;i++)
    {
        dis[i]=x[i]*x[i]+y[i]*y[i];
    }
    sort(dis,dis+n);
    return dis[k-1];
}
int main()
{
    int k = 3;
  int x[] = { 1, -1, 1 };
  int y[] = { 1, -1, -1 };
  int n = sizeof(x)/sizeof(x[0]);

  cout << minRadius(k, x, y, n) << endl;

  return 0;
}
