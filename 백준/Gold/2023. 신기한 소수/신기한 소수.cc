// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int N;
void DFS(int number, int jarisu);
bool isPrime(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    DFS(2,1); //소수, 해당 소수의 자릿수
    DFS(3,1);
    DFS(5,1);
    DFS(7,1);
}

void DFS(int number, int jarisu)
{
    if(jarisu == N)
    {
        if(isPrime(number)) // 소수이면 출력
        {
            cout << number << "\n";
        }
        return;
    }
    for(int i=1;i<10;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        if(isPrime(number*10+i))
        {
            DFS(number*10+i,jarisu+1);
        }
    }
}

bool isPrime(int number)
{
    for(int i=2;i<=number/2; i++) // 약수가 아니다: 자기가 누군가랑 곱했을 때 성립이 되지않는다 : 무조건 2이상이랑 곱해야지 판별 가능 -> 무조건 절반의 수 안에 약수 찾기 가능
    {
        if(number%i==0)
        {
            return false;
        }
    }
    return true;
}