#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string to_s(int a , int b);
int main(){
    int n;
    cin >> n;
    vector<int> s(n + 1);
    int si;
    for(int i = 0 ; i < n + 1 ; i++)
    {
        cin >> si;
        s[i] = si;
    }
    string res;
    for(int i = 0 ; i < n + 1 ; i++)
    {
        if(s[i] > 0 && i != 0)
            res = res + '+' + to_s(s[i] , n - i);
        else if(s[i] > 0 && i == 0)
            res = res + to_s(s[i] , n - i);
        else
            res = res + to_s(s[i] , n - i);      
    }
    cout << res << endl;
    system("pause");
    return 0;   
}

string to_s(int a , int b)
{
    string s;
    if(a != 0)
    {
        if(a == 1)
            s = s;
        else if(a == -1)
            s = s + '-';
        else
            s = s + to_string(a); 
        if(b != 0 && b != 1)
            s = s + "x^" + to_string(b);
        if(b == 1)  
            s = s + 'x';
        if(b == 0 && a < 0)
            s = s + to_string(-a);  
        if(b == 0 && a > 0)
            s = s + to_string(a);       
    }
    return s;
}
