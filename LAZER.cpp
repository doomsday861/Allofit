
/**
 * MARCH LONG CHALLENGE
 * Kartikeya (doomsday861)
 * 2020-03-10 13:45:18
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
//IMPLEMENTED FROM GEEKFORGEEKS https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
struct Point 
{ 
	int x; 
	int y; 
}; 

bool onSegment(Point p, Point q, Point r) 
{ 
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
		q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
	return true; 

	return false; 
} 
int orientation(Point p, Point q, Point r) 
{ 
	int val = (q.y - p.y) * (r.x - q.x) - 
			(q.x - p.x) * (r.y - q.y); 

	if (val == 0) return 0; 

	return (val > 0)? 1: 2;
} 

bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
{ 
	int o1 = orientation(p1, q1, p2); 
	int o2 = orientation(p1, q1, q2); 
	int o3 = orientation(p2, q2, p1); 
	int o4 = orientation(p2, q2, q1); 

	if (o1 != o2 && o3 != o4) 
		return true; 
	if (o1 == 0 && onSegment(p1, p2, q1)) return true; 
	if (o2 == 0 && onSegment(p1, q2, q1)) return true; 
	if (o3 == 0 && onSegment(p2, p1, q2)) return true; 
	if (o4 == 0 && onSegment(p2, q1, q2)) return true; 
	return false; 
} 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb

testcase
{	int n,q;
	cin >> n >>q;
	int ar[n+1];
	for(int i = 1 ; i <=n;i++)
	{
		cin >>ar[i];
	}
	ll count =0;
	for(int i =0 ; i < q;i++)
	{	count=0;
		int x1,x2,y;
		cin >> x1>>x2>>y;
		for(int i = 1; i <= n-1 ; i++)
		{
		    	struct Point p1 = {x1,y},p2 = {x2,y};
		    	struct Point p3 = {i,ar[i]},p4={(i+1),ar[i+1]};
		    	if((x1==i+1 && y == ar[i+1])||(x2==i && y==ar[i]))
					continue;
				if(doIntersect(p1,p2,p3,p4))
					count++;
		}
		cout << count<<endl;
	}
}
} 


