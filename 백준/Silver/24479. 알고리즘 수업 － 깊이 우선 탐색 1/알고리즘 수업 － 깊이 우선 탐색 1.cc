#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<vector<int>> graph;
vector<int> visited;
vector<int> sequence;
int N,M,R, Seq; // V : 정점 집합, E : 간선 집합, R : 시작 정점

void dfs(int n);

int main() {
    
    fastio;
    
    cin >> N >> M >> R;
    graph.resize(N+1);
    visited.resize(N+1);
    sequence.resize(N+1);
    int u,v;
    for(int i=0;i<M;i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1;i<=N;i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    
    dfs(R);
    for(int i=1; i<N+1; i++)    printf("%d\n",sequence[i]);

    return 0;
}

void dfs(int n)
{
    sequence[n] = ++Seq;
    visited[n] = 1;
    int graphsize = graph[n].size(), v;
    for(int i=0; i<graphsize; i++){
        v = graph[n][i];
        if(visited[v]==0) dfs(v);
    }
}