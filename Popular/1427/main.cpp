#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int tmp;
    vector<int> num;
    while(cin >> tmp)
    {
        if(tmp == 0)
            break;
        num.push_back(tmp);
    }
    for(int i = num.size() - 1 ; i >= 0 ;i--)
    {
        if(i == 0)
            cout << num[i];
        else
            cout << num[i] << " ";
    }
    system("pause");
    return 0;   
}
