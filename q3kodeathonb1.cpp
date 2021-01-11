/**
 * q3
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
 bool isPossible(vector<int>& nums) {
        typedef pair<int, int> P;
        multiset<P> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int v = nums[i];
            int m = st.size();
            auto it = st.lower_bound(P(v - 1, 0));
            if(it == st.end()){
                st.insert(P(v, 1));
                continue;
            }
            if(it->first != v - 1){
                st.insert(P(v, 1));
                continue;
            }
            int l = it->second;
            st.erase(it);
            st.insert(P(v, l + 1));
        }
        for(auto elem: st) if(elem.second < 3) return false;
        return true;    
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(ll i=0;i<n;i++)
        cin>>nums[i];
    if(isPossible(nums))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
    return 0;
}