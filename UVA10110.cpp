//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll unsigned int
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
ll t;
cin >> t;
while(t!=0)
{
if((ll)sqrt(t)*(ll)sqrt(t)!=t)
cout << "no"<<endl;
else
cout <<"yes"<<endl;
cin >> t;
}
    return 0; 
} 
