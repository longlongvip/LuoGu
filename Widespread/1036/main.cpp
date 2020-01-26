#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
void little(string &p);
int main(){
    string w;
    cin >> w;
    string s;
    getline(cin , s);
    little(w);
    little(s);
    int lw = w.length();
    int ls = s.length();
    int local = ls;
    int c = 0;
    for(int i = 0 ; i < ls ; i++)
    {
        for(int j = i ; j < i + lw ; j++)
        {
            if(s[i] != w[j])
                break;
        }
        c++;
        local = i < local ? i : local;
    }
    if(c == 0)
        cout << -1 << endl;
    else
        cout << c << local << endl;
    
    system("pause");
    return 0;
}

void little(string &p)
{
    while(*p != ' ')
    {
        if('A' <= *p && *p <= '91')
            *p = *p + 32;
        p++;
    }
}
