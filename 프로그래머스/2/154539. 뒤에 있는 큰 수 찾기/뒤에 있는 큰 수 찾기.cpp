#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> numbers) {
    // 결과 벡터를 초기화하고, 모든 원소를 -1로 설정
    vector<int> answer(numbers.size(), -1);
    
    // 정수 쌍을 저장하는 스택 선언
    stack<pair<int, int>> st;
    
    // 입력 벡터를 순회
    for (int i = 0; i < numbers.size(); i++)
    {
        // 스택에서 더 작은 값들을 처리
        while (!st.empty())
        {
            // 스택 맨 위의 정수와 해당 인덱스 가져오기
            pair<int, int> top = st.top();
            
            // 현재 처리 중인 원소보다 크거나 같은 경우 처리 중단
            if (top.first >= numbers[i])
            {
                break;
            }
            
            // 현재 처리 중인 원소를 오른쪽에 위치한 더 큰 값으로 설정
            answer[top.second] = numbers[i];
            
            // 스택에서 해당 정수 제거
            st.pop();
        }
        
        // 현재 원소와 해당 인덱스를 스택에 추가
        st.push({ numbers[i], i });
    }
    
    // 결과 벡터 반환
    return answer;
}
