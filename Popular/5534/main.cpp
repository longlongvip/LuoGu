#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a, b, n, sum = 0;
    cin >> a >> b >> n;
    sum = n * a + n * (n - 1) / 2 * (b - a);
    cout << sum;
    system("pause");
    return 0;
}
