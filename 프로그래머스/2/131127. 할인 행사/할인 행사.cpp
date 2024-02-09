#include <string>
#include <vector>
#include <map>

using namespace std;

// 회원가입 하려는 날인지?
int check(map<string, int> wlist, vector<string> &discount, int idx) {
    for (int i = idx; i < (idx + 10); i++) {
        // 제품과 수량이 일치하지 않으면 회원가입을 하지 않음.
        if (!wlist[discount[i]]) {
            return 0;
        }
        wlist[discount[i]]--;
    }
    // 제품과 수량이 일치해 회원가입을 함.
    return 1;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    map<string, int> m;
    
    for(int i=0;i<number.size();i++)
    {
        m[want[i]] = number[i];
    }
    int d_size = discount.size();
    d_size -= 9;
    // 열흘 단위로 나눠서 회원가입을 할지 판별
    for (int i = 0; i < d_size; i++) {
        answer += check(m, discount, i);
    }
    
    return answer;
}