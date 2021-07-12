
// You are given a list of integers rooms and an integer target. Return the first integer in rooms that's target or larger. If there is no solution, return -1.

// Constraints

// 0 ≤ n ≤ 100,000 where n is the length of rooms

int solve(vector<int>& rooms, int target) {

int ans=0;
   for(int i=0; i <rooms.size();i++)
   {
       if(rooms[i]>=target)
       return rooms[i];
   }
    return -1;
}
