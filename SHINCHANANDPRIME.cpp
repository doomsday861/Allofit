/**
 * SOLUTION OF SHINCHAN AND PRIME
 * KARTIKEYA SRIVASTAVA
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool checkprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        return true;
        return false;
}
int main()
{
// time_t start, end; 
// time(&start); 
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
if(n&1^1) 	//EVEN CHECK
{
	cout<<"NO"<<endl;
	continue;
}
if(!checkprime(n))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
// time(&end); 
// double time_taken = double(end - start); 
//     cout << "Time taken by program is : " << fixed 
//          << time_taken << setprecision(5); 
//     cout << " sec " << endl; 
    return 0;
}