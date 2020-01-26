#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    float f;
    if(n <= 150)
        f = n * 0.4463;
    else if(n < 401)
        f = (n - 150) * 0.4663 + 150 * 0.4463;
    else
        f = (n - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
    printf("%.1f",f);
    //system("pause");
    return 0;   
}
