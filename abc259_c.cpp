/**
 * abc259_c
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
    string a,b;
    cin>>a>>b;
    stack<pair<char,int>>st1,st2;
    for(int i=0; i <a.length()-1;i++)
    {
        if(a[i]==a[i+1])
        {
            int cnt = 0;
            while(i < a.length() and a[i]==a[i+1])
            {
                i++;
                cnt++;
            }
            i++;
            cnt++;
            st1.push({a[i-1],cnt});
        }
        else
            st1.push({a[i],1});
        
    }
    if(a[a.size()-1]==a[a.size()-2])
    {
        int x = st1.top().second+1;
        char y = st1.top().first;
        st1.pop();
        st1.push({y,x});
    }
    else
    {
        st1.push({a[a.length()-1],1});
    }
    a = b;
        for(int i=0; i <a.length()-1;i++)
    {
        if(a[i]==a[i+1])
        {
            int cnt = 0;
            while(i < a.length() and a[i]==a[i+1])
            {
                i++;
                cnt++;
            }
            i++;
            cnt++;
            st2.push({a[i-1],cnt});
        }
        else
            st2.push({a[i],1});
        
    }
    if(a[a.size()-1]==a[a.size()-2])
    {
        int x = st2.top().second+1;
        char y = st2.top().first;
        st2.pop();
        st2.push({y,x});
    }
    else
    {
        st2.push({a[a.length()-1],1});
    }
    while(!st1.empty())
    {
        cout<<st1.top().fi <<" "<<st1.top().se<<endl;
        st1.pop();
    }
    cout<<endl;
    while(!st2.empty())
    {
        cout<<st2.top().fi<<" "<<st2.top().se<<endl;
        st2.pop();
    }
    bool f=0;
    while(!st1.empty() and !st2.empty())
    {
        if(st1.top().first!= st2.top().first)
        {
            f=1;
            break;
        }
        else if(st1.top().second > st2.top().second)
        {
            f=1;
            break;
        }
        else if(st2.top().second > st1.top().second)
        {
            if(st1.top().second < 2)
            {
                f=1;
                break;
            }
        }
        st1.pop();
        st2.pop();
    }
    if(f)
        cout<<"No";
    else
        cout<<"Yes";
    
    return 0;
}
