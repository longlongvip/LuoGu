#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool isP(int val);
bool isC(int n);
int main(){
    int min , max;
    cin >> min >> max;
    if(max >= 9989899)
        max = 9989899;
    for(int i = min ; i <= max ; i++)
    {
        if(isC(i) && isP(i))
            cout << i << endl;
    }
    system("pause");
    return 0;   
}

bool isP(int val)
{
    int q;
    for(q = 2; q <= sqrt(val); q++)
    {
        if(val % q == 0)
            return false;
    }
    return true;
}

bool isC(int n)
{
    int sum = 0;
    int k = n;
    while(n != 0) 
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if(sum==k)//判断是否回文 
        return true;
    else
        return false;
}

