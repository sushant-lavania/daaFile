// https://codeforces.com/contest/1541/problem/B
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
        ll a[n+1];
        // a[0]=0;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a[i]-i; j <= n; j+=a[i])
            {
                if (j>=0)
                {
                    if ((a[i]*a[j])==(i+j) && i<j)
                    {
                        ans++;
                    }
                    
                }
                
            }
            
            
        }
        cout<<ans<<endl;
        
    }
}