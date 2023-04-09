// https://codeforces.com/contest/1816/problem/B
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const ll M = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;cin>>n;
        int a[n/2];
        int b[n/2];
        int c[n/2];
        int d[n/2];
        for (int i = 0; i < n/2; i++)
        {
            a[i]=2*i+2;
            b[i]=2*n-2*i;
            c[i]=2*i+1;
            d[i]=2*n-1-2*i;
        }
        for (int i = 0; i < n/2; i++)
        {
            cout<<b[i]<<" "<<a[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < n/2; i++)
        {
            cout<<c[i]<<" "<<d[n/2-1-i]<<" ";
        }   
        cout<<endl;     
        
    }
}