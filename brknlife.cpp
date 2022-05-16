/**
 * brknlife
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run
testcase{
    string s1,s2;
    ll n1,n2;
    cin>>n1>>n2;
    cin>>s1>>s2;
    bool isalready=0;
    int i,j;
    i=j=0;
    while(i < n1 && j < n2)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else
            i++;
    }
    if(j==n2)
        isalready = 1;
    
    if(isalready)
    {
        cout<<-1<<endl;
        continue;
    }    
    vector<char> options = {'a','b','c','d','e'};
    i = j =0;
    for0(i,n1)
    {
        char expected = s2[j];
        if(s1[i]==s2[j])
        {
            j++;
        }
        else if(s1[i]=='?')
        {
            for(int k=0;k<5;k++)
            {
                if(options[k]!=expected)
                {
                    s1[i] = options[k];
                    break;
                }
            }
        }
    }
    cout<<s1<<endl;
}

    return 0;
}
