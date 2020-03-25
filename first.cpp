#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ar[n+1]={0};
        bool flag =false;
          ll index[1000001];

          memset(index,0,100000);

        for(ll i=1;i<=n;i++)
        {
            cin >> ar[i];
            index[ar[i]]=1;
        }
        ll unique[1000001];;
        memset(unique,0,100000);

        for(ll i=1;i<=n;i++)
        {
            if(index[i]==1)
            {
                unique[ar[i]]++;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if((unique[i]>1))
            {
                flag =true;
                break;
            }
        }
        if(flag)
        cout<<"Truly Happy"<<endl;
        else
        cout<<"Poor Chef"<<endl;
    }
}
