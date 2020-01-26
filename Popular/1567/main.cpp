#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        num[i] = tmp;
    }
    int c = 1, max = 0;
    for (int i = 1; i < n; i++)
    {
        if(num[i] > num[i-1])
            c++;
        else
        {
            c = 1;
        }
        if(max < c)
            max = c;
    }
    cout << max << endl;
    system("pause");
    return 0;   
}
