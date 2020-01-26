#include<string.h>
#include<stdio.h>
#include<sstream>
#include<iostream>
using namespace std;
char c[1001];
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        scanf("%s", &c);//字符串读入
        stringstream box;//定义stringstream
        int l = strlen(c) - 1;
        box << c[l];//将最后一位装入stringstream中
        int key;
        box >> key;//将stringstream中的值取出
        if(key % 2 == 0)
            cout << "even" << endl;//对值进行判断
        else 
            cout << "odd" << endl;
    }
    system("pause");
    return 0;
}