#include<iostream>
#include<vector>
#include<queue>
using namespace std;

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

       void bfs(int index){
           vector<bool>visited(V,false);
           queue<int>q;
           visited[index]=true;
           q.push(index);
           while(q.empty()==false){
               int u=q.front();
               q.pop();
               cout<<u<<" ";
               for(auto it=graph[u].begin();it!=graph[u].end();it++){
                   int child=*it;
                   if(!visited[child]){
                       visited[child]=true;
                       q.push(child);
                   }
               }
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
   
   g.bfs(0);

}