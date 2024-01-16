#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int solution(int x, int y, int n) {
    int answer = {0};
    if (x==y)
    {
        return 0;
    }
    queue<pair<int,int>> queue; //first = data, second = lv
    set<int> set; //중복 없애기
    
    set.insert(x);
    queue.push({x,0});
    
    while(!queue.empty())
    {
        auto data = queue.front();
        queue.pop();
        
        if(data.first == y)
        {
            answer = data.second;
            return answer;
        }
        else if(data.first < y)
        {
            int a = data.first + n;
            if (set.insert(a).second)
            {
                queue.push({a, data.second+1});
            }
            int b = data.first * 2;
            if (set.insert(b).second)
            {
                queue.push({b, data.second+1});
            }
            int c = data.first * 3;
            if (set.insert(c).second)
            {
                queue.push({c, data.second+1});
            }
            
        }
        
    }
    
    if (answer == 0)
    {
        return -1;
    }
    
    return answer;
}