#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V; // no of vertices

	vector<list<int>> adj;

public:
	Graph(int V); // constructor

	void addEdge(int v, int w);

	void BFS(int s); // s means starting point
};

Graph::Graph(int V) {
	this->V = V;
	adj.resize(V); 
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v's list
}


void Graph::BFS(int s)
{
	// Mark all nodes not visited
	vector<bool> visited;
	visited.resize(V, false);

	// Create a queue for BFS

	list<int> queue;

	// mark current node visited and enqueue it
	visited[s] = true;
	queue.push_back(s);


	while(!queue.empty()) {
		// Dequeue vertex from queue
		s = queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for (auto adjacent: adj[s])
		{
			if (!visited[adjacent])
			{
				visited[adjacent] = true;
				queue.push_back(adjacent);
			}
		}
	}
}


signed main() {
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);

	cout << "BFS (2): ";
	g.BFS(2);
}