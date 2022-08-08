#include <bits/stdc++.h>
using namespace std;
 
int solution(vector<int> &a)
{
    int ans=0;
    int n=a.size();
    int maxi=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(maxi<a[i])
        maxi=a[i];
    }
    int arr[maxi];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
    for(int i=1;i<maxi;i++)
    {
        if(arr[i]==i)
        {
            c=1;
            ans=i;
        }
    }
    if(c==0)
    {
        return 0;
    }
    else
    return ans;
}
int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x=0;
        cin>>x;
        a.push_back(x);
    }
    int ans=0;
    ans= solution(a);
    cout<<ans;
    // your code goes here
    return 0;
}