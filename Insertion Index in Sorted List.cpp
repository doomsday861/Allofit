
// Given a list of integers nums, sorted in ascending order, and a number target, return the index where target should be inserted to keep nums sorted. If target already exists in nums, return the largest index where target can be inserted.

// This should be done in \mathcal{O}(\log n)O(logn).

// Constraints

// 1 ≤ n ≤ 100,000 where n is the length of nums




int solve(vector<int>& nums, int target) {
    
    auto ans = upper_bound(nums.begin(),nums.end(),target);
    int rum = ans-nums.begin();
    return rum;
}
