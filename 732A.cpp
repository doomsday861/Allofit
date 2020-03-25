
/**
 * 732A
 * Kartikeya (doomsday861)
 * 2020-03-05 00:33:11
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 ll n,k;
 cin>>n>>k;
ll c=1;
ll x = c*n;
for(c=1;c<=9;c++)
if((c*n)%10==k || ((c*n)%10)==0)
break;
cout<<c<<endl;
//timee
    return 0; 
} 


