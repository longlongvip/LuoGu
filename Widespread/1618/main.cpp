#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int book[10] = {0} , n[10] = {0} , cnt = 0;
void dfs(int index , int a , int b , int c)
{
    int i;
    if(index == 10)
    {
        if( b * (n[1] * 100 + n[2] * 10 + n[3])
        ==   a * (n[4] * 100 + n[5] * 10 + n[6])
        &&
        c * (n[4] * 100 + n[5] * 10 + n[6])
        ==  b * (n[7] * 100 + n[8] * 10 + n[9]))
        {
            c++;
            printf("%d%d%d %d%d%d %d%d%d\n" , n[1],n[2],n[3],n[4],n[5],n[6],n[7],n[8],n[9]);
        }
        return;
    }
    for(i = 1 ; i < 10 ; i++)
    {
        if(book[i] == 0)
        {
            n[index] = i;
            book[i] = 1;
            dfs(index + 1 , a , b , c);
            book[i] = 0;
        }
    }
    return;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;  
    dfs(1, a , b ,c);
    if(cnt == 0)
        cout << "No!!!" <<endl;
    system("pause");
    return 0;
}