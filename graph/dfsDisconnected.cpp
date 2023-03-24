#include<iostream>
using namespace std;
#include<vector>

class Graph{
    int V;
    vector<vector<int>>graph;

    public:
    
        Graph(int v){
            this->V=v;
            graph.resize(v,vector<int>());
           }

        void addEdge(int u,int v){
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        void dfsRec(int curr,vector<bool>&visited){
            visited[curr]=true;
            cout<<curr<<" ";
            for(auto it=graph[curr].begin();it!=graph[curr].end();it++){
                int child=*it;
                if(visited[child]==false){
                        dfsRec(child,visited);
                }
            }
        }

        void dfsDis(int index){
            vector<bool>visited(V,false);
            for(int i=0;i<V;i++){
                if(!visited[i]){
                    dfsRec(i,visited);
                }
            }
        }

         int dfsDisCount(){
             int count=0;
            vector<bool>visited(V,false);
            for(int i=0;i<V;i++){
                if(!visited[i]){
                    dfsRec(i,visited);
                    count++;
                }
            }
            cout<<endl;
            return count;
        }
};
int main()
{
    Graph g(7);
    g.addEdge(0, 4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);
    g.addEdge(2, 3);
    g.addEdge(5, 6);
  cout<< g.dfsDisCount();
    return 0;
}

