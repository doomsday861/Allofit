
#include<bits/stdc++.h>
using namespace std;
long long sos(long long n)
+
{
    return (n*(n+1)/2)*(2*n+1)/3;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

long long p;
cin>>p;
long long ans =0;
if(p>=1)
{
    ans = 1;
}
for (long long i = 2; i <=p; i++)
{
        if(sos(i)<p)
        ans = i;
        else
        {
            break;
        }
        
}
cout<<ans;
    return 0;
}