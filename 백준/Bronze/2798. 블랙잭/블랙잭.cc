// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[101] = {0,};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M;
    int max = 9999999;
    int sum = 0;
    int result;
    cin >> N >> M;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<N-2;i++)
    {
        for(int j=i+1;j<N-1;j++)
        {
            for(int k=j+1;k<N;k++)
            {
                sum = arr[i]+arr[j]+arr[k];
                if(M - sum < max && M-sum >=0)
                {
                    max = M-sum;
                    result = sum;
                }
            }
        }
    }
    
    cout << result;
    

    return 0;
}