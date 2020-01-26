#include<cstdio>
#include<iostream>
using namespace std;
long long int w(long long int a , long long int b , long long int c);
int main(){
    long long  a , b , c;
    while(cin >> a >> b >>c)
    {
        if(a == -1 && b ==-1 && c == -1)
            break;
        printf("w(%lld, %lld, %ld) = %lld\n" , a , b , c , w(a ,b ,c));
    }
    system("pause");
    return 0;   
}

long long  int w(long long int a , long long int b , long long int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
        return 1;
    if(a > 20 || b > 20 || c > 20)
        return w(20 , 20 , 20);
    if(a < b && b < c)
        return w(a , b , c - 1) + w(a , b - 1 , c - 1) - w(a , b - 1 , c);
    return w(a - 1 , b , c) + w(a - 1 , b - 1 , c) + w(a - 1 , b , c - 1) - w(a - 1, b - 1 , c - 1);   
}
