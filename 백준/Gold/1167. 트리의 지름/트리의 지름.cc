// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef pair<int, int> edge;
vector<vector<edge>> A;
vector<bool> visited;
vector<int> m_distance;

void BFS(int node)
{
    queue<int> myqueue;
    myqueue.push(node);
    visited[node] = true;
    
    while(!myqueue.empty())
    {
        int now_node = myqueue.front();
        myqueue.pop();
        for(edge i : A[now_node])
        {
            if(!visited[i.first]) // 현재 노드에서 목적 노드에 방문한 적이 있는지
            {
                visited[i.first] = true;
                myqueue.push(i.first);
                m_distance[i.first] = m_distance[now_node]+i.second; // 거리배열 업데이트
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    A.resize(N+1);
    
    for(int i=0;i<N;i++)
    {
        int S;
        cin >> S;
        while(1)
        {
            int E,V;
            cin >> E;
            if(E == -1) break;
            cin >> V;
            A[S].push_back(edge(E,V)); // 문제 예시에 따라 굳이 양방향으로 push할 필요없음.
        }
    }
    m_distance = vector<int>(N+1, 0); // 초기화
    visited = vector<bool>(N+1, false); // 초기화
    
    BFS(1);
    int Max = 1; //현재 Max인 노드 초기화
    for(int i=2;i<=N;i++)
    {
        if(m_distance[Max] < m_distance[i])
        {
            Max = i;
        }
    }
    
    fill(m_distance.begin(),m_distance.end(),0);
    fill(visited.begin(),visited.end(),false);
    
    BFS(Max);
    sort(m_distance.begin(),m_distance.end());
    cout << m_distance[N] << "\n";
    

    return 0;
}