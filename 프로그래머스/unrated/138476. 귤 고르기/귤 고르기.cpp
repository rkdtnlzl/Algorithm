#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;  // 결과를 저장할 변수 초기화
    
    // 각각의 키(tangerine[i])에 대한 빈도를 저장할 맵을 생성
    map<int, int> m;
    for(int i=0;i<tangerine.size();i++)
    {
        m[tangerine[i]]++;  // 맵에 키를 추가하고 해당 키의 빈도를 1 증가
    }
    
    vector<int> v;  // 빈도를 저장할 벡터 생성
    for(auto u:m)
    {
        v.push_back(u.second);  // 맵의 값(빈도)을 벡터에 추가
    }
    
    sort(v.begin(), v.end(), greater<int>());  // 벡터를 내림차순으로 정렬
    
    int cnt=0;  // 현재까지 사용한 키의 빈도를 저장할 변수 초기화
    for(int i=0;i<v.size();i++)
    {
        if(cnt>=k) break;  // 이미 필요한 만큼의 키를 사용했으면 종료
        answer++;  // 키를 하나 더 사용
        cnt+=v[i];  // 사용한 키의 빈도를 더함
    }
    
    return answer;  // 결과 반환
}
