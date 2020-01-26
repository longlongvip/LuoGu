#include<cstdio>
#include<climits>
#include<iostream>
using namespace std;
int main(){
    long long res;
    int x , n , num = 0;
    cin >> x >> n;
    int first = 8 - x;
    if(x > 5)
        num = 0;
    else
        num = 6 - x;  
    int last = n - first;
    num = num  + (last / 7) * 5;
    if( (last % 7) > 5)
        num = num + 5;
    else
        num = num + last % 7;
    res = num * 250;
    cout << res;
    system("pause");
    return 0;
}
