#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<vector<int> >& adjList, int startNode,
         vector<bool>& visited)
{
    queue<int> q;
    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();
        cout << currentNode << " ";
        for (int neighbor : adjList[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

void addEdge(vector<vector<int> >& adjList, int u, int v)
{
    adjList[u].push_back(v);
}

int main()
{
    int vertices,a,b,i;
    cout<<"enter vertices"<<endl;
    cin>>vertices;
    vector<vector<int> > adjList(vertices);

    for( i; i<vertices;i++)
      {
          cin>>a;
          cin>>b;
          addEdge(adjList, a, b);
      }
    vector<bool> visited(vertices, false);
    cout << "Breadth First Traversal starting from vertex ";
    bfs(adjList, 0, visited);
    return 0;
}
