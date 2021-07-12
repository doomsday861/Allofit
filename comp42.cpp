/**
 * 191B138
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll zhi[100]={0,2,3,4,5,7,8,9,11,13,16,17,19,23,25,27,29,31,32,37,41};
ll stg[100]={0,1,2,3,2,2,3,2 ,2 ,2 ,3 ,2 ,2 ,2 ,2 ,2 ,2 ,2 ,3 ,2 ,2};
ll num1[20],num2[20];
ll gs[100];
ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
void init()
{
    ll i,j;
    gs[1]=1;
    for(i=2;i<=42;i++){
        gs[i]=gs[i-1]/gcd(gs[i-1],i)*(ll)i;
    }
}
 
int main()
{
    ll n,m;
    int i,j;
    init();
    cin>>n>>m;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
        ll sum=0;
        for(i=1;i<=20;i++){
            sum+=(n/gs[zhi[i]-1 ]-(m-1)/gs[zhi[i]-1 ]-( n/gs[zhi[i]]-(m-1)/gs[zhi[i] ] ) )*(stg[i]+1);
        }
        
        cout<<sum<<endl;
    }
    return 0;
}