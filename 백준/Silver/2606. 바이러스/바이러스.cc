#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

#define MAX 101

int arr[MAX][MAX];
int cnt = 0;
int n,m;
bool visited[MAX] = {0,};
queue<int> q;

void bfs(int v)
{
    q.push(v);
    visited[v] = true;
    
    while(!q.empty())
    {
        v = q.front();
        q.pop();
        for(int i = 1;i<=n;i++)
        {
            if(arr[v][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
    }
}

int main() {
    
    cin >> n >> m;
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    
    bfs(1);
    
    cout << cnt;
    

    return 0;
}