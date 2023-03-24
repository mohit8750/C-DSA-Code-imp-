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

    void shortDis(int index){
        vector<bool>visited(V,false);
        queue<int>q;
        visited[index]=true;
        q.push(index);
        int dist[V]={0};
        dist[index]=0;
        while(q.empty()==false){
              int u=q.front();
              q.pop();
              for(auto it=graph[u].begin();it!=graph[u].end();it++){
                  int child=*it;
                  if(!visited[child]){
                      dist[child]=dist[u]+1;
                      visited[child]=true;
                      q.push(child);
                  }
                  
              }
        } 
        for(int i=0;i<V;i++){
            cout<<i<<" "<<dist[i]<<endl;
        } 
    }
};

int main(){
    Graph g(4);
    g.addEdge(0,1);
      g.addEdge(0,2);
        g.addEdge(1,2);
          g.addEdge(1,3);
            g.addEdge(2,3);
            g.shortDis(0);
            return 0;

}