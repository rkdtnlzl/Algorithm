// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int,int>> A(N);
    
    for(int i=0;i<N;i++) // 종료시간이 우선순위가 높음(sort 할때)
    {
        cin >> A[i].second;
        cin >> A[i].first; 
    }
    sort(A.begin(), A.end()); 
    
    int cnt = 0;
    int end = -1;
    
    for(int i=0;i<N;i++)
    {
        if(A[i].second >= end) {
            end = A[i].first;
            cnt++;
        }
    }
    cout << cnt << "\n";
    

    return 0;
}