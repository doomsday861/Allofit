#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i < n; i++)
    {
        cin>>v[i];
    }
    long long ans =0;
    long long len =0;
    for(int i=0; i < n;i++)
    {
        if(v[i]==1)
        {
            len++;
        }
        else
        {
            ans = ans + ((len*(len+1)))/2;
            len =0;
        }
    }
    ans = ans + ((len*(len+1)))/2;
    cout<<ans<<endl;
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
