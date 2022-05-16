// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function
    // avoid space at the starting of the string in "move disk....."
    int count=0;
    void solve(int s,int d, int h, int n)
    {
        count++;
        if(n==1)
        {
            cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
            return;
        }
        solve(s,h,d,n-1);
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
        //return;
        solve(h,d,s,n-1);
        return;
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        // long long n = 7;
        solve(1,3,2,N);
        return count;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends