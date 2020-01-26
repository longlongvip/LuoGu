#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 1;
    while(max * (max + 1) < 2 * n)
        max++;
    int a = n - max * (max - 1) / 2;
    int b = max + 1 - a;
    if(max % 2 == 0)
        cout << a << "/" << b << endl;
    else
        cout << b << "/" << a << endl;
    system("pause");
    return 0;
}