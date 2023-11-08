#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 점화식 : dp[n] = dp[n-1] + dp[n-2] + dp[n-3]

int dp[1001];

int main() {
    int N;
    cin >> N;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(int i=4;i<=10;i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3]; 
    }
    
    for(int i=0;i<N;i++)
    {
        int a;
        cin >> a;
        cout << dp[a] << "\n";
    }

    return 0;
}