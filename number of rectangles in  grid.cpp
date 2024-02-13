#include<bits/stdc++.h>
using namespace std;
int rectCount(int n,int m)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cnt+=(n-i+1)*(m-i+1);
        }
    }
    return cnt;
}
int main()
{
    int n = 5, m = 4;
    cout << rectCount(n, m);
    return 0;
}
