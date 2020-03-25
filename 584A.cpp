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
ll n,t;
cin >> n >>t;
string s;
bool f=0;
if(t==10)
{
	if(n==1)
	{
		cout<<-1<<endl;
		return 0;
	}
	else
	{
		s ="1";
		if(s.length()<n)
 while(s.length()!=n)
 {
	 s +='0';
 }
 }
 cout<<s<<endl;
 return 0;
}
for(ll i =1;i<10;i++)
{
	if(i%t==0)
	{
		 s= to_string(i);
		 f=1;
		 break;
	 }
 }
 if(!f)
 {
	 cout<<-1<<endl;
	 return 0;
 }
 if(s.length()<n)
 while(s.length()!=n)
 {
	 s +='0';
 }
cout<<s<<endl;
    return 0; 
    } 
