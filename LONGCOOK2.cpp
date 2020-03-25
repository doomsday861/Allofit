//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
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
 ll centuryreturner(ll y1, ll y2)
 {		
	 ll count =0;
	 count +=(checkcount(y1));
	  count += (25*(y2/100) + (y2/400)) -(25*(y1/100) + (y1/400));
	 return count;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 testcase
{  
      ll count=0;
      ll m,y,m2,y2;
      cin >> m>>y;
      cin >> m2>>y2;
		if(y==y2)
		{
			if((m<=2)&&(m2>=2))
			{
				cout<<checkcount(y)<<endl;
				continue;
			}
			else
			{
				cout<< 0<<endl;
				continue;
			}
			
		}
		ll x = (y/100)*100;
		ll x1 = (y2/100)*100;
		if(x==x1)
		{
			while(y!=y2)
			{
				count +=checkcount(y);
				y++;
			}
			if(m2<=2)
			{
				count+=checkcount(y2);
			}
			cout << count <<endl;
			continue;
		}
		     ll diff1 =0;
		     ll diff2 =0;
		     if(m2<2)
		     y2--;
		     if(m>2)
		     y++;
		     x = (y/100)*100;
		     x1 = (y2/100)*100;
		     while(y!=x)
		     {
				 diff1 +=checkcount(y);
			//		if(checkcount(y)==1)
			//		cout<< y<<endl;
				 y--;
			 }
	
			 while(y2!=x1)
			 {
				 diff2 +=checkcount(y2);
		//		 if(checkcount(y2)==1)
		//		 cout<< y2<<endl;
				 y2--;
			 }
			 cout<<centuryreturner(100,900)<<" "<<diff1<<" "<<diff2<<endl;
			count = centuryreturner(x,x1) + diff2 - diff1;
			cout<<count<<endl;
  }
 
}
      
     
