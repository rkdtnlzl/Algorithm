// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A;
vector<bool> visited;
bool arrive;

void DFS(int now,int depth)
{
    if(depth == 5 || arrive)
    {
        arrive = true;
        return;
    }
    visited[now] = true;
    
    for(int i : A[now]) // now에 대한 모든 노드 체크
    {
        if(!visited[i])
        {
            DFS(i,depth+1);
        }
    }
    visited[now] = false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M;
    arrive = false;
    cin >> N >> M;
    A.resize(N); //백터 크기 N으로 초기화
    visited = vector<bool>(N,false); //다 false로 초기화
    
    for(int i=0;i<M;i++)
    {
        int s,e;
        cin >> s >> e;
        //양방향으로 저장
        A[s].push_back(e);
        A[e].push_back(s);
    }
    // 노드마다 DFS를 실행
    for(int i=0;i<N;i++)
    {
        DFS(i,1); // 여기서 1은 depth 시작값 
        if(arrive)
        {
            break;
        }
    }
    if(arrive)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    

    return 0;
}