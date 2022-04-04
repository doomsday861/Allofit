
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long merge(long long arr[],long long temp[],long long l, long long mid,long long r)
    {
        long long i,j,k;
        i  =l;
        j = mid;
        k = l;
        int ans=0;
        while(i<=mid-1 && j<=r)
        {
            if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            ans += (mid-i);
        }
        }
        while(i<=mid-1)
            temp[k++] = arr[i++];
            
        while(j<=r)
        temp[k++] = arr[j++];
    
     for(i = l; i<=r;i++)
     {
         arr[i] = temp[i];
     }
     return ans;
    }
    long long mergesort(long long arr[],long long temp[],long long l, long long r)
    {
        long long mid, ans =0;
        if(r > l)
        {
            mid = (l+r)/2;
            ans +=mergesort(arr,temp,l,mid);
            ans +=mergesort(arr,temp,mid+1,r);
            ans +=merge(arr,temp,l,mid+1,r);
        }
        return ans;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        mergesort(arr,temp,0,N);
     
    }

};



int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
