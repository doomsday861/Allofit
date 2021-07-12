#include <bits/stdc++.h> 
#define ll long long  
using namespace std; 

void collinear(int x1, int y1, int x2,  
               int y2, int x3, int y3) 
{ 

    int a = x1 * (y2 - y3) +  
            x2 * (y3 - y1) +  
            x3 * (y1 - y2); 
  
    if (a == 0) 
        cout << "SEND\n"; 
    else
        cout << "DONT SEND\n"; 
} 
  int main() 
{ 
        ll t;
        cin>>t;
        while(t--)
        {
            ll x1,y1,x2,y2,x3,y3;
            cin>>x1>>y1;
            cin>>x2>>y2;
            cin>>x3>>y3;
            collinear(x1, y1, x2, y2, x3, y3); 
        }
    return 0; 
} 