/**
 * 1637B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
vector<vll> subarrays;
ll counter=0;
ll ans=0;
ll findmex(vll v)
{
	ll mini =0;
	sort(bend(v));
	for(ll i=0; i<v.size();i++)
	{
		if(v[i]==mini)
			mini++;
		if(v[i]>mini)
			break;
	}
//	cout<<mini;
	if(v.size()==mini)
	{
		return mini+1;
	}
	return v.size()+mini;
}
void printSubArrays(vector<ll> arr, int start, int end)
{     
    if (end == arr.size())
        return;
       
    else if (start > end)
        printSubArrays(arr, 0, end + 1);
           
    else
    {
    	vll temp;
//    	 cout<<"[";
        for (int i = start; i < end; i++){
//            cout << arr[i] << ", ";
            temp.pb(arr[i]);
        }
//         cout<<arr[end]<<"]"<<endl;
        temp.pb(arr[end]);
        subarrays.pb(temp);
        ll x = findmex(subarrays[counter]);
//        cout<<" "<<x<<endl;
        ans+=x;
        counter++;
        temp.clear();
        printSubArrays(arr, start + 1, end);
    }
     
    return;
}

int main()
{
    run

    
 testcase
  {
  	subarrays.clear();
  	counter=0;
  	ans =0;
  	ll n;
  	cin>>n;
  	vll v(n);
  	for0(i,n) cin>>v[i];

  	printSubArrays(v,0,0);
  	cout<<ans;
  	cout<<endl;
}
   

    return 0;
}