
/**
 * MARCH LONG 2020
 * Kartikeya (doomsday861)
 * 2020-03-07 17:50:14
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll unsigned long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;

int readInt () {
  bool minus = false;
  int result = 0;
  char ch;
  ch = getchar();
  while (true) {
    if (ch == '-') break;
    if (ch >= '0' && ch <= '9') break;
    ch = getchar();
  }
  if (ch == '-') minus = true; else result = ch-'0';
  while (true) {
    ch = getchar();
    if (ch < '0' || ch > '9') break;
    result = result*10 + (ch - '0');
  }
  if (minus)
    return -result;
  else
    return result;
}
short count(ll n)
{
  n = n^(n>>32);
  n^=(n>>16);
  n^=(n>>8);
  n^=(n>>2);
  n^=(n>>1);
  return((short)(n&1));
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 int t = readInt();
 while(t--)
 {
   int n = readInt();
   int q = readInt();
      ll e=0;ll o=0;
      for(ll i =0 ; i < n;i++)
      { 
        int x = readInt();
        if(count(x))
          o++;
        else
          e++;
      }
      for(ll i =0;i<q;i++)
      { 
        int x =readInt();
        if(count(x))
        {
            cout<<n-e<<" "<<e<<endl;
        }
        else
        {
          cout<<e<<" "<<n-e<<endl;
        }
      }
  }
//timee
    return 0; 
} 