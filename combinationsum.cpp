// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void rec(int ind, int sum,unordered_set<vector<int>>&c,vector<int>&v,vector<int>&A, int &target)
    {
        if(sum==target)
        {
            //sort(v.begin(),v.end());
            c.insert(v);
            return;
        }
        if(sum > target || ind==A.size())
        return;
        v.push_back(A[ind]);
        sum +=A[ind];
        rec(ind,sum,c,v,A,target);
        v.pop_back();
        sum -=A[ind];
        rec(ind+1,sum,c,v,A,target);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        unordered_set<vector<int>>c;
        vector<vector<int>> ans;
        sort(A.begin(),A.end());
        vector<int> v;
        rec(0,0,c,v,A,B);
        for(auto x:c)
        {
            ans.push_back(x);
        }
       // sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
        if(result.size()==0){
            cout<<"Empty";
        }
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}     // } Driver Code Ends