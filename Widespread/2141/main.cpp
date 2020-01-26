#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num;
    vector<int> q(n);
    int table[200001] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        cin >> num;
        q[i] = num;
        table[num] = -1;
    }

    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1 ; j < n ;j++)
            table[q[i] + q[j]]++;
    }
    int c = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(table[q[i]] != -1)
            c++;
    }
    cout << c << endl;
    system("pause");
    return 0;
}
