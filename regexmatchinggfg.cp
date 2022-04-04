// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isPatternPresent(string S, string P) {
        // code here
        int f =0; // string p
        int s= 0; //        S
        if(P[0]=='^')
        {
            for(int i=1;i<P.length();i++)
            {
                //cout<<P[i]<<" "<<S[i-1]<<endl;
                if(P[i]==S[i-1])
                {
                    continue;
                }
                return 0;
            }
            return 1;
        }
        // tar$ = 4
        // coaltar = 7
        else if(P[P.length()-1]=='$')
        {
            int counter=0;
            for(int i = S.length()-P.length()+1;i<S.length();i++)
            {
                cout<<S[i]<<" "<<P[counter]<<endl;
                if(S[i]==P[counter])
                {
                    counter++;
                    continue;
                }
                return 0;
            }
            return 1;
        }
        else
        {
            
            while(f<P.length() && s<S.length())
            {
                if(P[f]==S[s])
                {
                f++;
                s++;
                }
                else
                s++;
            }
        if(f==P.length())
        return 1;
        return 0;
        }
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string P,S;

        cin>>P;
        cin>>S;

        Solution ob;
        cout << ob.isPatternPresent(S,P) << endl;
    }
    return 0;
}  // } Driver Code Ends