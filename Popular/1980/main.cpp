#include<cstdio>
#include <climits>
#include<iostream>

int count(int m , int x);
using namespace std;
int main(){
    int n , x;
    cin >> n >> x;
    int sum = 0;
    for(int i = 1 ; i <= n ; i++)
    {
       sum = sum + count(i , x);
    }
    cout << sum << endl;
    system("pause");
    return 0;
}

int count(int m , int x)
{
    int cnt = 0;
    while(m)
    {
        int tmp = m % 10;
        if(tmp == x)
            cnt ++;
        m = m / 10;
    }
    return cnt;
}
