// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, less<int>> Max; //오름차순
priority_queue<int, vector<int>, greater<int>> Min; // 내림차순

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    int x;
    for(int i=0;i<N;i++)
    {
        cin >> x;
        if(Max.empty() || x <= Max.top())
        {
            Max.push(x);
        }
        else
        {
            Min.push(x);
        }
        while(Max.size() < i/2+1)
        {
            Max.push(Min.top());
            Min.pop();
        }
        while(Max.size() > i/2+1)
        {
            Min.push(Max.top());
            Max.pop();
        }
        
        cout << Max.top() << "\n";
    }

    
    
    return 0;
}