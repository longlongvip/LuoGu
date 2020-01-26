#include<cstdio>
#include <climits>
#include<iostream>
using namespace std;
int main(){
    double d;
    cin >> d;
    double sum = 0;
    double base = 2;
    int i = 0;
    while(sum <= d)
    {
        sum = sum + base ;
        base = base * 0.98;
        i = i + 1;
    }
    cout << i << endl;
    system("pause");
    return 0;
}
