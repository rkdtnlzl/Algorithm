
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    int a;
    vector<int> v;
    for(int i=0;i<N;i++)
    {
        scanf("%d", &a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum+=v[j];
        }
    }
    printf("%d", sum);
    
    

    return 0;
}