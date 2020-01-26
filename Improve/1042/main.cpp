#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int a , b , c ,d;
    cin >> a >> b >> c >>d;
    int min = 60 * a + b;
    int max = 60 * c + d;
    int diff = max - min;
    int h = diff / 60;
    int m = diff - h * 60;
    cout << h << " " << m << endl;
    system("pause");
    return 0;   
}
