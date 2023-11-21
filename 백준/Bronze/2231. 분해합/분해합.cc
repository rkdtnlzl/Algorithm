#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> M;

    for (int N = 1; N < M; N++) {
        int sum = 0;
        int temp = N;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum + N == M) {
            cout << N << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
