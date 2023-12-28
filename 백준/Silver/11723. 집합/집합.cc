#include <iostream>
#include <bitset>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;

    // 비트셋을 사용하여 집합 표현
    bitset<21> s;

    while (m--) {
        string operation;
        cin >> operation;

        if (operation == "add") {
            int x;
            cin >> x;
            s.set(x, true);
        } else if (operation == "remove") {
            int x;
            cin >> x;
            s.set(x, false);
        } else if (operation == "check") {
            int x;
            cin >> x;
            cout << s.test(x) << '\n';
        } else if (operation == "toggle") {
            int x;
            cin >> x;
            s.flip(x);
        } else if (operation == "all") {
            s.set();
        } else if (operation == "empty") {
            s.reset();
        }
    }

    return 0;
}