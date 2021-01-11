/**
 * SOLUTION OF SHINCHAN AND MATHEMATICAL TABLES
 * KARTIKEYA SRIVASTAVA
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin>>n;
cout<<n<<endl;
int x =n;
while((x= x+n) != (n*11))
		cout<<x<<endl;
    return 0;
}