// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

#define ll long long 

// Pattern table from Case 1 
map<ll, ll> values{{1, 0}, 
				{10, 4}, 
				{100, 4}, 
				{1000, 454}, 
				{10000, 454}, 
				{100000, 45454}, 
				{1000000, 45454}, 
				{10000000, 4545454}, 
				{100000000, 4545454}, 
				{1000000000, 454545454}, 
				{10000000000, 454545454}, 
				{100000000000, 45454545454}, 
				{1000000000000, 45454545454}, 
				{10000000000000, 4545454545454}, 
				{100000000000000, 4545454545454}, 
				{1000000000000000, 454545454545454}, 
				{10000000000000000, 454545454545454}, 
				{100000000000000000, 45454545454545454}, 
				{1000000000000000000, 45454545454545454}}; 

// Function that returns the number of 
// even and odd digits in val 
pair<ll, ll> count_even_odd(ll val) 
{ 
	ll even = 0, odd = 0; 
	while (val) 
	{ 
		ll num = val % 10; 
		if (num % 2 == 0) 
			even++; 
		else
			odd++; 
		val /= 10; 
	} 
	return make_pair(even, odd); 
} 

// Function that returns True if num 
// satisfies the given condition 
bool satisfies_condition(ll num) 
{ 
	pair<ll, ll> answer = count_even_odd(num); 
	ll even = answer.first; 
	ll odd = answer.second; 

	if (even % 2 == 1 and 
		odd % 2 == 0) return true; 
	return false; 
} 

// Function to return the count of 
// numbers from 1 to val that 
// satisfies the given condition 
ll count_upto(ll val) 
{ 
	// If the value is already present 
	// in the values dict 
	if (values.find(val) != values.end()) 
		return values[val]; 

	ll index = 1; 
	for (int i = 0; 
			i < to_string(val).length() - 1; 
			i++) 
		index *= 10; 

	// If the value is even 
	// Case 2 
	if (to_string(val).length() % 2 == 0) 
		return values[index]; 

	ll val_len = to_string(val).length(); 
	ll cnt = values[index]; 

	// Now the problem is to count the desired 
	// numbers from 10**(val_len-1) + 1 to val 
	ll left_end = index + 1; 

	// Case 3 
	// Eliminating all the even numbers 
	cnt += (val - left_end) / 2; 
	if (satisfies_condition(val) or 
		satisfies_condition(left_end)) 
		cnt++; 

	return cnt; 
} 

// Driver Code 
int main() 
{ 
	// Input l and r 
	ll l = 100, r = 10000; 
	ll right = count_upto(r); 
	ll left = 0; 

	if (l == '1') 
		left = 0; 
	else
		left = count_upto(l - 1); 

	cout << right - left << endl; 
	return 0; 
} 

