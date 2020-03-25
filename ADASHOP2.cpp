
/**
 * MARCH LONG 2020
 * Kartikeya (doomsday861)
 * 2020-03-07 19:17:35
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
      ll a,b;
      cin >>a>>b;
      ll c =0;
      vector<ll>row;
      vector<ll>col;
      ll sum=0;
      ll count=0;
     if(a!=b)
    {
        sum = (a+b)/2;
        a = sum;
        b = sum;
        row.push_back(a);
        col.push_back(b);
        count++;
    }
    ll ir=a;
    ll ic=b;
    if(a==1 && b==1)
    {
        col.push_back(2);
        row.push_back(2);
        count++;
        a=2;
        b=2;
    }
    while(a!=8 && b!=8)
    {
        sum = (a+b)/2;
        if(sum<=4)
        {
            row.push_back((2*a)-1);
            col.push_back(1);
            row.push_back(1);
            col.push_back((2*a)-1);
            count +=2;
        }
        if(sum>4)
        {
            row.push_back(8);
            col.push_back((2*a)-8);
            row.push_back((2*a)-8);
            col.push_back(8);
            count +=2;
        }
        row.push_back(a);
        col.push_back(b);
        a++;
        b++;
        row.push_back(a);
        col.push_back(b);
        count +=2;
    }
    if(ir==ic && ir==1)
    {
    cout<<count<<endl;
    for(ll i =0 ;i<count;i++)
    {
        cout<<row[i]<<" "<<col[i]<<endl;
    }
    continue;
    }
    a = ir;
    b = ic;
    a--;
    b--;
        row.push_back(a);
    col.push_back(b);
    count++;
    while(a!=1 && b!=1)
    {   sum = (a+b)/2;
        if(sum<=4)
        {
            row.push_back((2*a)-1);
            col.push_back(1);
            row.push_back(1);
            col.push_back((2*a)-1);
            count +=2;
        }
        if(sum>4)
        {
            row.push_back(8);
            col.push_back((2*a)-8);
            row.push_back((2*a)-8);
            col.push_back(8);
            count +=2;
        }
        row.push_back(a);
        col.push_back(b);
        a--;
        b--;
        row.push_back(a);
        col.push_back(b);
        count +=2;
    }
    cout<<count<<endl;
    for(ll i =0 ;i<count;i++)
    {
        cout<<row[i]<<" "<<col[i]<<endl;
    }
  }
//timee
    return 0; 
} 
