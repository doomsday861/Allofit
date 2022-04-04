#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
  
// iPair ==>  Integer Pair
typedef pair<int, int> iPair;
  
// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices
  
    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list< pair<int, int> > *adj;
  
public:
    Graph(int V);  // Constructor
  
    // function to add an edge to graph
    void addEdge(int u, int v, int w);
  
    // prints shortest path from s
    void shortestPath(int s,int y);
};
  
// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
  
void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
  
// Prints shortest paths from src to all other vertices
void Graph::shortestPath(int src, int y)
{

    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    vector<int> dist(V, INF);
  
    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty())
    {

        int u = pq.top().second;
        pq.pop();
  
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
 
            int v = (*i).first;
            int weight = (*i).second;
  
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
  
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
    // for(int i=0; i <V;i++)
     cout<<dist[y]<<endl;
}
  
// Driver program to test methods of graph class
int main()
{
    // create the graph given in above figure
    int V;
    cin>>V;
      Graph g(V+3);
      int sum=0;
    for(int i=1;i<=V;i++)
  		{
  			int x;
  			cin>>x;
  			sum+=x;
  			g.addEdge(i-1,i,sum);
  			g.addEdge(i,i-1,sum);
  		}
  		g.addEdge(0,V,0);
  		g.addEdge(V,0,0);
   	int x,y;
   	cin>>x>>y;
    g.shortestPath(x,y-1);
  
    return 0;
}