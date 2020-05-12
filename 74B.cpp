	/**
 * 78B CODEFORCES
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
char res[1000];
res[0] = 'R';
res[1] = 'O';
res[2] = 'Y';
res[3] = 'G';
res[4] = 'B';
res[5] = 'I';
res[6] = 'V';
int n;
cin >> n;
for (int i = 7; i < n; ++i) {
    res[i] = res[i - 4];
}
for(int i=0;i<n;i++)
cout<<res[i];
    return 0; 
} 