#include<iostream>
using namespace std;
#include<vector>

class Graph
{
    int V;
    vector<vector<bool>> graph;

public:
    Graph(int v)
    {
        this->V = v;
        graph.resize(v, vector<bool>(v, false));
    }

    void addEdge(int u, int v)
    {
        graph[u][v] = true;
        graph[v][u] = true;
    }

    void print()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "the neighbour of "<< " "<<i << ">>";
            for (int j = 0; j < V; j++)
            {
                if (graph[i][j])
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(2, 3);
    g.print();
    return 0;
}
