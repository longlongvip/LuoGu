#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
void L(string &p);
int main(){
    string w , s;
    getline(cin , w);
    getline(cin , s);
    L(w);
    L(s);
    int lw = w.length();
    int ls = s.length();
    int c = 0;
    for(int i = 0 ; i < ls - lw + 1; i++)
    {
        int flag = -1;
        int kw = 0;
        for(int j = i ; j < i + lw ; j++)
        {
            int ks = j;
            if(s[ks++] != w[kw++])
            {
                flag = 0;
                break;
            }
            flag = 1;
        }
        if(flag == 1)
            c++;
    }
    if(c == 0)
        cout << -1 << endl;
    else
        cout << c << ' ' << s.find(w) << endl;
    system("pause");
    return 0;   
}
void L(string &p)
{
    int i = 0;
    while(p[i] != '\0')
    {
        if(p[i] >= 'A' && p[i] <= 'Z' )
            p[i] += 32;
        i++;
    }
}
