#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    int K;
    scanf("%d", &K);
    int a;
    int sum=0;
    stack<int> st;
    for(int i=0;i<K;i++)
    {
        scanf("%d", &a);
        if(a==0)
        {
            st.pop();
        }
        else
        {
            st.push(a);
        }
    }

	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	printf("%d", sum);
}