// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long A,B;
    
    cin >> A >> B;
    
    long arr[10000001];
    
    for(int i=2;i<10000001;i++)
    {
        arr[i] = i;
    }
    for(int i=2;i<=sqrt(10000001);i++)
    {
        if (arr[i] == 0)//소수가 아니면
        {
            continue;
        }
        for(int j=i+i; j<10000001;j = j+i)
        {
            arr[j] = 0;
        }
    }
    int cnt = 0;
    for(int i=2;i<10000001;i++)
    {
        if(arr[i] != 0)
        {
            long temp = arr[i];
            while((double)arr[i] <= (double)B/(double)temp)
            {
                if((double)arr[i] >= (double)A/(double)temp)
                {
                    cnt++;
                }
                temp = temp * arr[i];
            }
        }
    }
    cout << cnt << "\n";
    
}