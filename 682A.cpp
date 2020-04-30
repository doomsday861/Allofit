	/**
 * 682A codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 ll x,y;
 cin >> x>>y;
 //for numbers less than n and remainder i and divisble by 5 = (n+(5-i))/5
 ll r=0;
 r += (x/5)*(y/5); //0,0
 r += ((x+4)/5)*((y+1)/5); //1,4
 r += ((x+3)/5)*((y+2)/5); //2,3
 r += ((x+2)/5)*((y+3)/5);	//3,2
 r += ((x+1)/5)*((y+4)/5); //4,1
 cout<< r<<endl;
//timee
    return 0; 
} 