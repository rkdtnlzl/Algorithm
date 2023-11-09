#include <iostream>
#include <stack>
using namespace std;

struct Person
{
	long height;
	long equal;
};

stack<Person> st;
long n;
long result = 0;
int main()
{
	cin >> n;

	long num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;

		long cnt = 0;
		long equal = 0;

		while (!st.empty())
		{
			if (num > st.top().height)
			{
				cnt += st.top().equal + 1;
				st.pop();
			}
			else if (num == st.top().height)
			{
				cnt += st.top().equal + 1;
				equal += st.top().equal + 1;
				st.pop();
			}
			else break;
		}
		if (!st.empty()) cnt++;
		st.push({num, equal});

		result += cnt;
	}

	cout << result;
}