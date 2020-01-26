#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int k , i = 0;
    cin >> k;
    k = double(k);
    double sum = 0;
    while(sum <= k)
    {
        i = i + 1;
        sum = sum + 1.0 / i;
    }
    cout << i << endl;
    system("pause");
    return 0;   
}
