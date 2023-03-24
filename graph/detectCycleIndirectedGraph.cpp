#include <iostream>
using namespace std;
#include <vector>
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
    }

    bool dfsRec(int index, vector<bool> &visited, vector<bool> &recStack)
    {
        visited[index] = true;
        recStack[index] = true;
        for (auto it = graph[index].begin(); it != graph[index].end(); it++)
        {
            int child = *it;
            if (!visited[child] )
            {
               if( dfsRec(child, visited, recStack)){
                   return true;
               }
            }
            else if (recStack[child])
            {

                return true;
            }
            
        }
        recStack[index] = false;
        return false;
    }

    bool detectCycle()
    {
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (dfsRec(i, visited, recStack))
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
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 3);
    if (g.detectCycle())
    {
        cout << "has cycle" << endl;
    }
    else
    {
        cout << " has no cycle" << endl;
    }
}