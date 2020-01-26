#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n , c = 0;
    cin >> n;
    vector<int> num(n);
    for(int i = 0 ; i < n ;i++)
    {
        int tmp;
        cin >> tmp;
        num[i] = tmp;
    }
    vector<int> res;
    res.push_back(0);
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(num[j] < num[i])
            {
                c++;
            }
        }
        res.push_back(c);
        c = 0;
    }
    for(int i = 0 ; i < n ;i++)
    {
        if(i == n)
            cout << res[i];
        else
            cout << res[i] << " ";   
    }
    
    system("pause");
    return 0;   
}
