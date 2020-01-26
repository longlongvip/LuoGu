#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int N = 1001, c = 0;
    int n;
    cin >> n;
    int a[N] = {0};
    for(int i = 0 ; i < n ; i++ )
    {
        int t;
        cin >> t;
        if(a[t] == 0)
            c = c + 1;
        a[t] = 1;
    }
    cout << c << endl;
    for(int i = 0 ; i < N ; i++ )
    {
        if(a[i] == 1)
            cout << i << ' ';
    }
    system("pause");
}
