#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    int V;
    vector<vector<int>> graph;

public:
    Graph(int v)
    {
        this->V = v;
        graph.resize(v, vector<int>());
    }

    void addEdge(int u, int v)
    {
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    void bfs(int index, vector<bool> &visited)
    {

        queue<int> q;
        q.push(index);
        visited[index] = true;

        while (!q.empty())
        {

            int u = q.front();
            q.pop();
            cout << u << " ";

            for (auto it = graph[u].begin(); it != graph[u].end(); it++)
            {
                int child = *it;
                if (!visited[child])
                {
                    visited[child] = true;
                    q.push(child);
                }
            }
        }
    }

    // FOR PRINTING DISCONNECTED GRAPH

    void bfsDis()
    {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                bfs(i, visited);
            }
        }
    }

     int bfsDisCount()
    {
        vector<bool> visited(V, false);
        int count=0;
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                bfs(i, visited);
                count++;
            }
        }
        cout<<endl;
        return count;
    }
};

int main()
{
    int n = 10;
    Graph g(n);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(2, 9);
    g.addEdge(2, 7);
    g.addEdge(5, 6);
   cout<< g.bfsDisCount()<<endl;
   return 0;
}