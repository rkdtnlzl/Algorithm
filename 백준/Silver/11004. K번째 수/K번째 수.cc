// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,N;
    vector<int> v;
    cin >> a >> b;
    for(int i=0;i<a;i++)
    {
        cin >> N;
        v.push_back(N);
    }
    sort(v.begin(), v.end());
    cout << v[b-1];

    return 0;
}