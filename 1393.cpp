
/**
 * UVA 1393
 * Kartikeya (doomsday861)
 * 2020-03-10 23:17:54
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
      ll n,m;
      cin >>n>>m;
      bool f=0;
        char ar[n][m];
        ll pi,pj;
        for(ll i =0 ; i < n; i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin >>ar[i][j];
                if(ar[i][j]=='#')
                {
                    f= 1;
                    pi = i;
                    pj=j;
                }
                if(pi==i)
                {
                    for(ll z=0;z<m;z++)
                    {
                            if(ar[pi][j]=='I'||ar[pi][j]=='E'||ar[pi][j]=='H'||ar[pi][j]=='O'||ar[pi][j]=='V'||ar[pi][j]=='A'))
                            {
                                if(j==(pj-1))
                                cout<<
                            }      
                    }

                }
                if(f)
                {
                        if(ar[i][j]=='I'||ar[i][j]=='E'||ar[i][j]=='H'||ar[i][j]=='O'||ar[i][j]=='V'||ar[i][j]=='A')
                        {
                            if(pi !=i)
                            cout<<"forth ";
                            if(pj==(j-1))

                        }
                    
                }
            }
        }
}
//timee
    return 0; 
} 

