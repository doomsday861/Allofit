#include<bits/stdc++.h>
using namespace std;
ll lastin(int n) 
{   ll in=0;
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
           return i;
    } 
} 

int main()
{
    int t;
    cin>>t;
    int x =0;
    while(t--)
    {
        ll n;
        cin >> n;
        if(x<lastin(n))
            x = lastin(n);
    }
    cout << x<<endl;
}