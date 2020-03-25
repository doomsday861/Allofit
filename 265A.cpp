
/**
 * 265A
 * Kartikeya (doomsday861)
 * 2020-03-05 01:34:29
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
 string s,r;
 cin >> s>>r;
 ll count=1;
 ll i=0;ll j=0;
 while(j<r.length())
 {
     if(s[i]==r[j])
     {
         i++;
     }
     j++;
 }
 cout<<i+1<<endl;
//timee
    return 0; 
} 

