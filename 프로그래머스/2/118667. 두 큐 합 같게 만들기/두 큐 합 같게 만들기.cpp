#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    
    queue<int> q1;
    queue<int> q2;
    
    long long sum1 = 0;
    long long sum2 = 0;
    
    for(int i=0;i<queue1.size();i++)
    {
        q1.push(queue1[i]);
        q2.push(queue2[i]);
        sum1+=queue1[i];
        sum2+=queue2[i];
    }
    if((sum1+sum2) % 2 != 0)
    {
        return -1;
    }
    
    int n = 3*sum1;
    
    while(--n)
    {
        if(sum1 > sum2)
        {
            int x = q1.front();
            sum2 += x;
            sum1 -= x;
            q2.push(x);
            q1.pop();
        }
        else if(sum1 < sum2)
        {
            int x = q2.front();
            sum2 -= x;
            sum1 += x;
            q1.push(x);
            q2.pop();
        }
        else
        {
            return answer;
        }
        answer++;
        
    }
    
    return -1;
}