#include<iostream>
#include<vector>

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

    void print()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "the neighour of"
                 << " " << i << " ";
            for (int j = 0; j < graph[i].size(); j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0,1 );
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(2, 3);
    g.print();
}