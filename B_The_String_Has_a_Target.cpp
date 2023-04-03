// https://codeforces.com/contest/1805/problem/B
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
        string s;cin>>s;
        int y=-1;

        for(int i=1;i<n;i++){

            if(s[i]!=s[i-1]){
                y=i;
                break;
            }
        }

        int min=s[0];
        int z=-1;
        for(int i=y;i<n;i++){
            if(s[i]<=min){
                min=s[i];
                z=i;
            }
        }
 
        if(y==-1 || z==-1){

            cout<<s<<endl;
            continue;
        }
        

        string ans="";
        ans+=s[z];
        for(int i=0;i<n;i++){
            if(i!=z){
                
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
}