	/**
 * MULTHREE 
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
 testcase
  { 	
  	ll k,f,l;
  	cin >> k >> f>>l;
  	ll sum = (f+l)%10;
	 if(sum==0|| sum==5)
  	{
  		cout<<"NO\n";
  		continue;
  	}
  	else
  	{
  		string s="";
  		s +=f+'0';
  		s +=l+'0';
  		s +=sum+'0';
  		ll ts = l+f+sum;
  		s +=(ts%10)+'0';
  		ts += (ts%10);
  		if(k==2)
  		{
  			if((f+l)%3==0)
  				cout<<"YES\n";
  			else
  				cout<<"NO\n";
  			continue;
  		}
  		else if(k==3)
  		{
  			if((f+l+sum)%3==0)
  				cout<<"YES\n";
  			else
  				cout<<"NO\n";
  			continue;
  		}
  		else
  		{
  			int d[]={6,2,4,8};
  			bool f=0;
  			ll i =3;
  			while(1)
  			{
  				if(s[i]=='8' && s[i-1]=='4' && s[i-2]=='2' && s[i-3]=='6')
  				{
  					break;
  				}
  				s +=(ts%10)+'0';
  				ts +=(ts%10);
  				i++;
  			//	cout<<s<<endl;
  				if(k==(ll)s.length())
  				{
  					if(ts%3==0)
  						cout<<"YES\n";
  					else
  						cout<<"NO\n";
  					f=1;
  				}
  				if(f)
  				{
  					break;
  				}		
  			}
  			if(f)
  				{
  					continue;
  				}
  			if((ll)s.length()==k)
  			{
  				if(ts%3==0)
  				cout<<"YES\n";
  				else
  				cout<<"NO\n";
  				continue;	
  			}
  			ll cycles = (k-s.length())/4;
  			ts += 20*(cycles);
  			ll rem = (k-s.length())%4;
  			for(ll i=0; i<rem;i++)
  			{
  				ts +=d[i];
  			}
  		//	cout<<ts<<endl;
  			if(ts%3==0)
  				cout<<"YES\n";
  			if(ts%3!=0)
  				cout<<"NO\n";
  		}
  	}
  
}
//timee
    return 0; 
} 

/*
1124862486248624862486(2486)
1 2 // 2 1
1236248624862486(2486)
3 1 // 1 3 // 2 2 
1348624862486(2486)
1 4 // 4 1 // 2 3 // 3 2 
14500000000000000
23500000000000000
3 3 // 1 5 // 5 1 // 2 4 // 4 2
15624862486248624862486(2486)
1 6 // 6 1 // 2 5 // 5 2 // 3 4 // 4 3 
167486248624862486(2486)
4 4 // 1 7 // 7 1 // 2 6 // 6 2 // 3 5 // 5 3
178624862486248624862486(2486)
1 8 // 4 5 // 5 4 // 2 7// 7 2 // 3 6 // 6 3 // 8 1
189862486248624862486(2486)
1 9 // 9 1 // 2 8 // 8 2 // 7 3 // 3 7 // 6 4 //4 6 // 5 5 // 5 5
1900000000000000(00000)
2 9 // 9 2 // 3 8 // 8 3 // 4 7 // 7 4 // 6 5 // 5 6
29124682468(2468)
6 6 // 7 5 // 5 7 // 4 8 // 8 4 // 3 9 // 9 3
392468(2468)
 8 7
 785000000
 */