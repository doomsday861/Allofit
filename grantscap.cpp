#include<bits/stdc++.h>
using namespace std;
int ok(vector<int> &grantsArray, int test, int &newBudget)
{
  int sum =0;
  for(int i=0;i < grantsArray.size();i++)
  {
      sum += min(test,grantsArray[i]);
  }
  if(sum == newBudget)
  {
    return 1;
  }
  if(sum > newBudget)
  {
    return -1;
  }
  if(sum < newBudget)
  {
    return 0;
  }
  return 4;
}
double findGrantsCap( vector<int> grantsArray, int newBudget ) 
{
  // your code goes here
  int low = 1;
  int high = newBudget+1;
  int mid =0;
  while(low < high)
  {
    mid = (low+high)/2;
    int x = ok(grantsArray, mid,newBudget);
    if(x==1)
    {
      break;
    }
    if(x==-1)
    {
      high = mid;
    }
    else
    {
      low = mid;
    }
  }
  cout<<mid;
  double ans=47;
  return ans;
}

int main() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i <n;i++)
    cin>>v[i];
  int budget;
  cin>> budget;
  cout<<findGrantsCap(v,budget);
  return 0;
}