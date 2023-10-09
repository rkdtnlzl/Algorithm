#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a=0;
    int b=0;
    int c=0;
    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int thr[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i]==one[i%5])
        {
            a++;
        }
        if(answers[i]==two[i%8])
        {
            b++;
        }
        if(answers[i]==thr[i%10])
        {
            c++;
        }
    }
    int Max = max(a,b);
    Max = max(Max,c);
    if(Max == a)
    {
        answer.push_back(1);
    }
    if(Max == b)
    {
        answer.push_back(2);
    }
    if(Max == c)
    {
        answer.push_back(3);
    }
    
    return answer;
}