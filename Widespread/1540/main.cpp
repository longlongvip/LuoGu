#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n , m , num;
    cin >> n >> m;
    int cnt[1001] = {0};
    queue<int> table;
    vector<int> wait(m);
    for(int i = 0 ; i < m ; i++)
    {
        cin >> num;
        wait[i] = num;
    }
    int c = 0;
    for(int i = 0 ; i < m ; i++)
    {
        if(cnt[wait[i]] == 0)
        {
            table.push(wait[i]);
            cnt[wait[i]] = 1;
            c++;
        }
        if(table.size() > n)
        {
            cnt[table.front()] = 0;
            table.pop();
        }  
    }
    cout << c << endl;   
    system("pause");
    return 0;   
}
