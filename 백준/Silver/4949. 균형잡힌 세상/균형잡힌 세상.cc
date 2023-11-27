#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    while(true){
		stack<char> S;
		string str;
		
		getline(cin, str);
		
		if(str==".")
			break;
	
		bool flag = true;
			
		for(int i=0; i<str.size(); i++){
			
			if(str[i] == '[' || str[i] == '('){
				S.push(str[i]);
			}
			
			else if(str[i] == ']'){
				if(S.empty()){
					flag = false;
					break;
				}
				
				else if(S.top() == '['){
					S.pop();
				}
				
				else if(S.top() == '('){
					flag = false;
					break;
				}
			}
			
			else if(str[i] == ')'){
				if(S.empty()){
					flag = false;
					break;
				}
				
				else if(S.top() == '('){
					S.pop();
				}
				
				else if(S.top() == '['){
					flag = false;
					break;
				}
			}
			
		}
		
		if(S.empty() && flag)
			cout << "yes\n" ;
			
		else
			cout << "no\n" ;
	
	}
    

    return 0;
}