#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int tree[10001] = {0};
    int l , m;
    cin >> l >> m;
    int start , end;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> start >> end;
        for(int j = start ; j <= end; j++)
        {
            tree[j] = 1;
        }
    }
    int c = 0;
    for(int i = 0 ; i < 10001 ; i++)
    {
        c = c + tree[i];
    }
    cout << l + 1 - c << endl;
    system("pause");
    return 0;   
}
