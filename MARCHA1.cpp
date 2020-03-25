
/**
 * MARCH CHALLENGE
 * Kartikeya (doomsday861)
 * 2020-03-05 10:22:55
**/
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
//flin
//timeb
 testcase
  { 
      ll n,k;
      cin >> n>>k;
      ll s=0;
      bool f=0;
      ll ar[n];
      for(ll i =0 ; i < n; i++)	
      {
          cin >> ar[i];
      }
      sort(ar,ar+n);
      ll j =n;
      for(ll i =0 ; i < n;i++)
      {
            if(ar[i]>=k)
            {   j=i;
                break;
            }
      }
     do{    s =0;
            for(ll i =0;i<j;i++)
            {
                s +=ar[i];
                if(s==k)
                {
                    f=1;
                    break;
                }
            }
           //if(j>n)
           // break;
            //j++;
     }while(next_permutation(ar,ar+j));
     if(f)
     cout<<"Yes"<<endl;
     else
     {
         cout<<"No"<<endl;
     }
     
}
//timee
    return 0; 
} 

