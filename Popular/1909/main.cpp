#include<cstdio>
#include <climits>
#include<iostream>
using namespace std;
int main(){
    int min = INT32_MAX;
    int n ;
    cin >> n;
    long a , b;
    int num;
    for(int i = 0 ; i < 3 ; i++ )
    {
        cin >> a >> b;
        if( n % a == 0)
            num = n / a;
        else
        {
            num = n / a + 1;
        }
        if(min > num * b)
        {
            min = num * b;
        }
    }
    cout << min;
    system("pause");
}
