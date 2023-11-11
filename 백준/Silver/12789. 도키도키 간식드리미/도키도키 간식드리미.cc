// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int N;
stack<int> st;
int arr[1001];

int main() {
    
    int cnt = 0, num = 1;
    
    cin >> N;

    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<N;i++)
    {
        if(st.empty() && cnt<N)
        {
            st.push(arr[cnt++]);
        }
        while(st.top() != num && cnt<N)
        {
            st.push(arr[cnt++]);
        }
        if(!st.empty() && st.top() == num)
        {
            st.pop();
            num++;
        }
        else
        {
            cout << "Sad\n" ;
            return 0;
        }
    }
    printf("Nice\n");
    
    return 0;
}