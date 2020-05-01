		/**
	 * Equal stacks hackerearth
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
	 ll a,b,c;
	 cin >> a>>b>>c;
		vector<ll> s(3,0);
	 vector<ll> h1(a);
	 vector<ll> h2(b);
	 vector<ll> h3(c);
	 for(ll i =0 ; i < a;i++)
	 {	
	 	cin>>h1[i];
	 	s[0] +=h1[i];
	 }
	 for(ll i =0;i <b;i++)
	 {	
	 	cin>>h2[i];
	 	s[1] +=h2[i];
	 }
	 for(ll i =0 ; i <c;i++)
	 {	
	 	cin>>h3[i];
	 	s[2] +=h3[i];
	 }
	 reverse(h1.begin(),h1.end());
	 reverse(h2.begin(),h2.end());
	 reverse(h3.begin(),h3.end());
	 ll i1 = a-1;
	 ll i2 = b-1;
	 ll i3 = c-1;
	 ll mini = min(s[0],min(s[1],s[2]));
	 bool f=0;
	 //cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
	 while((s[0]!=s[1] || s[0]!=s[2] || s[1]!=s[2]))
	 {
	 	mini = min(s[0],min(s[1],s[2]));
	 	if(s[0]> mini)
	 	{
	 		s[0] -=h1[i1];
	 		i1--;
	 		if(i1==0)
	 		{
	 			f=1;
	 			break;
	 		}
	 	}
	 //	cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;

	 	mini = min(s[0],min(s[1],s[2]));
	 	if(!((s[0]!=s[1] && s[0]!=s[2] && s[1]!=s[2]) ||((i1*i2*i3)!=0)))
	 		break;
	 	if(s[1]>mini)
	 	{
	 		s[1] -= h2[i2];
	 		i2--;
	 		if(i2==0)
	 		{
	 			f=1;
	 			break;
	 		}
	 	}
	 	if(!((s[0]!=s[1] && s[0]!=s[2] && s[1]!=s[2]) ||((i1*i2*i3)!=0)))
	 		break;
	 	
	 	mini = min(s[0],min(s[1],s[2]));
	 	if(s[2]>mini)
	 	{	
	 		s[2] -= h3[i3];
	 		i3--;
	 		if(i3==0)
	 		{
	 			f=1;
	 			break;
	 		}
	 	}
	 	 	mini = min(s[0],min(s[1],s[2]));

	 }
	 if(f)
	 {	
	 	cout<<0<<endl;
	 	return 0;
	 }
	 //cout<<i1<<" "<<i2<<" "<<i3<<endl;
	 cout<<s[0]<<endl;
	//timee
	    return 0; 
	} 