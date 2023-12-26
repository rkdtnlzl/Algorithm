
#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 301
using namespace std;

int N;
int arr[MAX];
int dp[MAX];

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    dp[2] = arr[1]+arr[2];
    dp[3] = max(arr[1]+arr[3], arr[2]+arr[3]);
    
    for(int i=4;i<=N;i++)
    {
        dp[i] = max(dp[i-2]+arr[i], dp[i-3]+arr[i-1]+arr[i]);
    }
    cout << dp[N] << "\n";

    return 0;
}