#include <bits/stdc++.h>
using namespace std;
int kadane(int a[], int n);
int maxCircularSum(int a[], int n)
{

	int max_kadane = kadane(a, n);
	if(max_kadane < 0)
	return max_kadane;
	cout<<max_kadane<<endl;
	// Case 2: Now find the maximum sum that includes
	// corner elements.
	int max_wrap = 0, i;
	for (i = 0; i < n; i++) {
		max_wrap += a[i]; // Calculate array-sum
		a[i] = -a[i]; // invert the array (change sign)
	}
	cout<<max_wrap<<endl;
	// max sum with corner elements will be:
	// array-sum - (-max subarray sum of inverted array)
	max_wrap = max_wrap + kadane(a, n);
	cout<<max_wrap<<endl;

	// The maximum circular sum will be maximum of two sums
	return (max_wrap > max_kadane) ? max_wrap : max_kadane;
}

// Standard Kadane's algorithm to find maximum subarray sum
// See https:// www.geeksforgeeks.org/archives/576 for details
int kadane(int a[], int n)
{
	int max_so_far = 0, max_ending_here = 0;
	int i;
	for (i = 0; i < n; i++) {
		max_ending_here = max_ending_here + a[i];
		
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;
		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

/* Driver program to test maxCircularSum() */
int main()
{
	int a[] = { 11, 10, -20, 5, -3, -5, 8, -13, 10 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Maximum circular sum is " << maxCircularSum(a, n) << endl;
	return 0;
}

// This is code is contributed by rathbhupendra
