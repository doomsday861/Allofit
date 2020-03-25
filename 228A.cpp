
/**
 * 228A
 * Kartikeya (doomsday861)
 * 2020-03-05 01:22:50
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
//time
     ll c[4];
     for(ll i=0;i <4;i++)
     cin >> c[i];
     sort(c,c+4);
     ll diff=0;
     for(ll i =0;i<=3;i++)
     {
         while(c[i]==c[i+1] && i<4)
         i++;
         diff++;
     }
     cout<<4-diff<<endl;
//timee
    return 0; 
} 

