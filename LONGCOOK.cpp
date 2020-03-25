//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
ll dayd(ll day, ll month, ll year) 
{  
    static int t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    year -= month < 3;  
    return ( year + year / 4 - year / 100 +  
             year / 400 + t[month - 1] + day) % 7;  
}
bool leapchecker(ll YEA)  
{  
   
    if (YEA % 400 == 0)  
        return true;  
    if (YEA % 100 == 0)  
        return false;  
        
    if (YEA % 4 == 0)  
        return true;  
    return false;  
}  
ll checkcount(ll y)
           {  ll count =0;
              if(leapchecker(y))
              {
                  if(dayd(1,2,y)==6)
                  {
                      count++;
                  }
              }
              else
              {
                  if((dayd(1,2,y)==6)||dayd(1,2,y)==0)
                   count++;
              }
              return count;
		   }
          
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
timeb
vector<ll> cal;
vector<ll> cum;
ll sum=0;
ll counter =0;
for(ll i =0;i<=10000000;i++)
{	ll x= checkcount(i);
	if(i>100 && i<=189)
	{
		if(x==1)
	//	cout<< i <<endl;
		counter++;
	}
	if(i>900 && i <=988)
	{
		if(x==1)
	//	cout<< i <<endl;
		counter++;
	}
	cal.push_back(x);
	sum +=x;
	cum.push_back(sum);
}

testcase
{  
      //bool f=0;
      ll count=0;
      ll m,y,m2,y2;
      cin >> m>>y;
      cin >> m2>>y2;
      /*if(y==y2)
      {
		  if((m<=2)&&(m2>=2))
		  {
			  count +=checkcount(y);
		  }
		  cout<<count<<endl;
		  continue;
	  }
	  if(m2>=2)
	  count +=checkcount(y2);
	  if(m>2)
	  y++;
	  while(y!=y2)
	  {	
		  	    count+=checkcount(y);
		  	    y++;
	  }*/
	  if(m2<2)
	  y2--;
	  if(m>2)
	  y++;
	if((m>2)&&(y==y2))
	{
	    cout<<0<<endl;
	    continue;
	}
	if(y==y2)
      {
		  if((m<=2)&&(m2>=2))
		  {
			  count +=checkcount(y);
		  }
		  cout<<count<<endl;
		  continue;
	  }
        count = cum[y2]-cum[y-1];
      //  cout<<cum[y2]<<" "<<cum[y-1]<<endl;
       // cout<<counter<<endl;
	    cout<<count<<endl;
}
 
timee
    return 0; 
} 
