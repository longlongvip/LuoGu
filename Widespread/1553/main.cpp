#include<cstdio>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int find_c(string &p , int l);
string fz(string &p , int l);
string qu_zero(string &p , int l);
int main(){
    string s;
    cin >> s;
    int lp = s.length();
    int local = find_c(s , lp);
    char c = s[local];
    if(local == 0)
    {
        s = fz(s , lp);
        s = qu_zero(s , lp);
    }
    else if(local == lp - 1)
    {
        s = s.substr(0, lp - 1);
        s = fz(s , lp - 1);
        s = qu_zero(s , lp - 1);
        s = s + c;
    }
    else
    {
        string s1 = s.substr(0, local);
        s1 = fz(s1 , local);
        s1 = qu_zero(s1 , local);
        string s2 = s.substr(local + 1 , lp - 1 - local);
        s2 = fz(s2 , lp - 1 - local);
        s2 = qu_zero(s2 , lp - 1 - local);
        s = s1 + c + s2; 
    }
    cout << s << endl;
    system("pause");
    return 0;   
}
int find_c(string &p , int l)
{
    int  index = 0;
    for(int i = 0 ; i < l ; i++)
    {
        if(p[i] == '.' || p[i] == '%' || p[i] == '/')
        {
            index = i;
            return index;
            break;
        }
    }
    return index;
}

string fz(string &p , int l)
{
    string res;
    for(int i = l - 1 ; i >= 0 ; i--)
    {
        res = res + p[i];
    }
    return res;
}

string qu_zero(string &p , int l)
{
    int i = 0;
    while(p[i] == '0')
    {
        i++;
    }
    int c = i - 1;
    return p.substr(c - 1 , l - c);
}
