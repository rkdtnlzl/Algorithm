#include <iostream>
#include <vector>

using namespace std;

int countStairNumbers(int N) {
    // dp[i][j]: 길이가 i이고 마지막 자리 숫자가 j인 계단 수의 개수
    vector<vector<int>> dp(N + 1, vector<int>(10, 0));

    // 길이가 1인 계단 수 초기화
    for (int i = 1; i <= 9; ++i) {
        dp[1][i] = 1;
    }

    // 길이가 2부터 N까지의 계단 수 계산
    for (int i = 2; i <= N; ++i) {
        for (int j = 0; j <= 9; ++j) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1];
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
            }
        }
    }

    // 길이가 N인 계단 수의 총합 계산
    int result = 0;
    for (int i = 0; i <= 9; ++i) {
        result = (result + dp[N][i]) % 1000000000;
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    int answer = countStairNumbers(N);

    cout << answer << endl;

    return 0;
}
