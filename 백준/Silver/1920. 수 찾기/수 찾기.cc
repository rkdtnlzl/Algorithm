#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& basic,int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;

        if(basic[mid]==target)
            return mid;
        else if(basic[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int N,M;

vector<int> A;
vector<int> target;

int main() {
    cin >> N;

    for (auto i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    sort(A.begin(),A.end());

    cin>> M;

    for (auto i = 0; i< M; i++) {
        int x;
        cin >> x;
        target.push_back(x);
    }

    for(auto i =0; i<M; i++) {
        int result = binarySearch(A,target[i],0,N-1);

        if(result!=-1) {
            cout << "1\n";
        } else cout <<"0\n";
    }
}