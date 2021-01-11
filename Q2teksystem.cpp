#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll k,n, A[32];
vector<ll> s1,s2;

int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
    ll res = 0;
    cin >> n >> k;
    for (int i=0;i<n;i++) cin>>A[i];

    int left = n>>1;
    int right = n - left;

    for (int i=1;i<(1<<left);i++)
    {
        ll prod = 1;
        for (int j=0;j<left;j++)
        {
            if (i & (1<<j))
            {
                if (A[left-1-j] > k/prod) {
                    prod = LLONG_MAX;
                    break;
                }
                prod *= A[left-1-j];
            }
        }

        s1.push_back(prod);
        if (prod <= k) res++;
    }

    for (int i=1;i<(1<<right);i++)
    {
        ll prod = 1;
        for (int j=0;j<right;j++)
        {
            if (i & (1<<j))
            {
                if (A[left + right -1-j] > k/prod) {
                    prod = LLONG_MAX;
                    break;
                }
                prod *= A[left+right-1-j];
            }
        }

        s2.push_back(prod);
        if (prod <= k) res++;
    }

    //for (int i=0;i<s1.size();i++) cout<<s1[i]<<" ";
    //cout<<endl;
   // for (int i=0;i<s2.size();i++) cout<<s2[i]<<" ";

    sort(s2.begin(),s2.end());
    for (int i=0;i<s1.size();i++)
    {
        //cout<<"s1 "<<s1[i]<<endl;
        ll x = s1[i];
        if (x > k) continue;
        ll y = k/x;
        //cout<<"y "<<y<<endl;
        int ubound = upper_bound(s2.begin(),s2.end(),y) - s2.begin();
        //cout<<"ub "<<ubound<<endl;
        res += ubound;
    }

    cout<<res<<endl;
}
}