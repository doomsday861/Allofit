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
ll r,c;
cin >> r>>c;
bool f=0;
char ch[r][c];
for(ll i = 0; i < r; i++)
{
	for(ll j =0; j < c;j++)
	{
		cin>>ch[i][j];
		if(ch[i][j]=='C'||ch[i][j]=='M'||ch[i][j]=='J'||ch[i][j]=='Y')
		f=1;
	}
 }
 if(!f)
 cout<<"#Black&White" <<endl;
 else
 cout<< "#Color"<<endl;
}
