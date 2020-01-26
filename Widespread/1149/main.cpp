#include<iostream>
#include<string>
using namespace std;
int S(int x);
int main()
{
    int a , b , c , m , sum = 0;
    cin >> m;
    for(a = 0 ; a <= 1111 ; a++)
    {
        for(b = 0 ; b <= 1111 ; b++)
        {
            c = a + b;
            if(S(a) + S(b) + S(c)== m - 4)
                sum++;
        }
    }
    cout << sum << endl;;
    system("pause");
    return 0;
}
int S(int x)
{
    int num = 0;
    int f[10] = {6 , 2 , 5 , 5 , 4 , 5 , 6 , 3 , 7 , 6};
    while(x / 10 != 0)
    {
        num = num + f[x % 10];
        x = x / 10;
    }
    num = num + f[x];
    return num;
}