
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int x;
int total_sum = 0;

int* reversearrat(int *arr, int len)
{
    int i,max, location,j,temp;;
    for(i =0; i <len;i++)
    {
        max = arr[i];
        location = i;
        for(j = 0; j < len;j++)
        {
            if(max>arr[j])
            {
                max = arr[j];
                location = j;
            }
        }
        temp = arr[i];
        arr[i] =  arr[location];
        arr[location] = temp;
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,m;
cin>>n;
int ar[n];
for(int i=0; i < n;i++)
cin>>ar[i];

reversearrat(ar,n);
for(auto x: ar)
    cout<<x<<" ";

    return 0;
}