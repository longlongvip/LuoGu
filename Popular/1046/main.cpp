#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int num[10]={0};
    for(int i = 0 ; i < 10 ; i++)
    {
        int tmp;
        cin >> tmp;
        num[i] = tmp;
    }
    int h;
    cin >> h;
    h = h + 30;
    int c = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        if(h >= num[i])
            c ++;
    }
    cout << c << endl;
    system("pause");
    return 0;   
}
