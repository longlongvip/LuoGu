#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    string tmp;
    cin >> tmp;
    int l = tmp.length();
    int c = 0;
    if(tmp[0] == '-')
    {
        cout << '-';
        for(int i = l - 1 ; i > 0 ; i--)
        {
            if(c == 0 && tmp[i] == '0')
                continue;  
            else
            {
                c++;
                cout << tmp[i];
            }
                  
        }
    }
    else
    {
        for(int i = l - 1 ; i >= 0 ; i--)
        {
            if(c == 0 && tmp[i] == '0')
                continue; 
            else
            {
                c++;
                cout << tmp[i]; 
            }
                   
        }
    }
    system("pause");
    return 0;   
}
