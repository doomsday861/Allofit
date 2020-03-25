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
testcase{
ll x,y,a,b;
cin >>x>>y>>a>>b;
a++;b++;
ll maxi = max((x*(y-b)),(y*(x-a)));
ll maxii = max((x*(b-1)),(y*(a-1)));
cout << max(maxi,maxii)<<endl;
}
    return 0; 
} 
