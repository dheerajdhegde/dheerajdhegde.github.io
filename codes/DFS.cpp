#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
    void addEdge(int v, int w);
    void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main()
{
    Graph g;
    int vertices,i,a,b;
    cout<<"enter vertices"<<endl;
    cin>>vertices;
    for( i; i<vertices;i++)
      {
          cin>>a;
          cin>>b;
          g.addEdge(a, b);
      }


    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";

    // Function call
    g.DFS(2);

    return 0;
}

// improved by Vishnudev C
