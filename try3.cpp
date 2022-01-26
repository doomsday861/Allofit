/**
 * try
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// A Binary Search based function to find
// the element that appears only once
void search(int arr[], int low, int high)
{

    // Base cases
    if (low > high)
        return;

    if (low == high) {
        cout << "The required element is " << arr[low];
        return;
    }

    // Find the middle point
    int mid = (low + high) / 2;
    cout<<mid<<" "<<arr[mid]<<endl;
    // If mid is even and element next to mid is
    // same as mid, then output element lies on
    // right side, else on left side
    if (mid % 2 == 0) {
        if (arr[mid] == arr[mid + 1])
            search(arr, mid + 2, high);
        else
            search(arr, low, mid);
    }

    // If mid is odd
    else {
        if (arr[mid] == arr[mid - 1])
            search(arr, mid + 1, high);
        else
            search(arr, low, mid - 1);
    }
}

// Driver code
int main()
{
    int arr[] = { 1, 1, 2, 2,3,4,4,5,5};
    int len = sizeof(arr) / sizeof(arr[0]);

    search(arr, 0, len - 1);

    return 0;
}
