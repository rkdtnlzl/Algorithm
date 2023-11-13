// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int check[100001]; //수빈이가 이동하는 곳을 체크해주는 곳
int map[100001]; // 수빈이가 이동하는 경로를 받아주는 배열 map

int main() {
    
    int N,K;
    cin >> N >> K;
    
    queue<int> q;
    
    q.push(N);
    while(!q.empty())
    {
        int Nsubin = q.front();
        q.pop();
        
        if(Nsubin == K)
        {
            break;
        }
        
        // 수빈이가 한칸 오른쪽 이동할 시 주어진 값에 초과 여부를 확인
        // 또한 수빈이가 간곳을 또 가는지 확인
        if(Nsubin +1 < 100001 && Nsubin+1 >= 0 && !check[Nsubin+1])
        {
            q.push(Nsubin + 1);
            check[Nsubin+1] = true; //오른쪽 한칸 이동한 것이 한번 간 곳이라고 체크
            map[Nsubin+1] = map[Nsubin] + 1; // 이동했다는 의미로 map에 추가
        }
        if(Nsubin -1 < 100001 && Nsubin-1 >= 0 && !check[Nsubin-1])
        {
            q.push(Nsubin - 1);
            check[Nsubin-1] = true; //오쪽 한칸 이동한 것이 한번 간 곳이라고 체크
            map[Nsubin-1] = map[Nsubin] + 1; // 이동했다는 의미로 map에 추가
        }
        if(Nsubin*2 < 100001 && Nsubin*2 >= 0 && !check[Nsubin*2])
        {
            q.push(Nsubin*2);
            check[Nsubin*2] = true; //오른쪽 한칸 이동한 것이 한번 간 곳이라고 체크
            map[Nsubin*2] = map[Nsubin] + 1; // 이동했다는 의미로 map에 추가
        }
    }
    
    cout << map[K];
    

    return 0;
}