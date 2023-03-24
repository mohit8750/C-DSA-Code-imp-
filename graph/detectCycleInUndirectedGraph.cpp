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

  bool dfsRec(int index, vector<bool> &visited, int parent)
    {
        visited[index] = true;
        for (auto it = graph[index].begin(); it != graph[index].end(); it++)
        {
            int child = *it;
            if (!visited[child])
            {
                if (dfsRec(child, visited, index) == true)
                {
                    return true;
                }
                else if (child != parent)
                    return true;
            }
        }
        return false;
    }

    bool detectCycle()
    {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (dfsRec(i, visited, -1) == true)
                {
                    return true;
                }
              
            }
           
        }
         return false;
    }

};
int main()
{
    Graph g(10);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(2, 9);
    g.addEdge(2, 7);
    g.addEdge(5, 6);
    if (g.detectCycle())
    {
        cout << "Graph has Cycle" << endl;
    }
    else
    {
        cout << "Graph Does NOT have a Cycle" << endl;
    }
    return 0;
}