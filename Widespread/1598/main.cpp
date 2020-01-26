#include<cstdio>
#include<string>
#include<iostream>
char large_table[26] = {
    'A','B','C','D','E','F','G',
    'H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U',
    'V','W','X','Y','Z'
};
using namespace std;
int main(){
    int cnt[26] = {0};
    char c = '*';
    string s1 , s2 , s3 , s4;
    getline(cin , s1);
    getline(cin , s2);
    getline(cin , s3);
    getline(cin , s4);
    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = s3.length();
    int l4 = s4.length();
    for(int i = 0 ; i < l1 ; i++ )
    {
        cnt[s1[i] - 'A']++;
    }
    for(int i = 0 ; i < l2 ; i++ )
    {
        cnt[s2[i] - 'A']++;
    }
    for(int i = 0 ; i < l3 ; i++ )
    {
        cnt[s3[i] - 'A']++;
    }
    for(int i = 0 ; i < l4 ; i++ )
    {
        cnt[s4[i] - 'A']++;
    }
    for(int i = 1 ; i < l1 ; i++ )
    {
        cnt[s1[i] - 'A']++;
    }

    int max = cnt[0];
    for(int i = 1 ; i < 26 ; i++ )
    {
        if(max < cnt[i])
            max = cnt[i];
    }
    cout << max << endl;
    char p[max + 1][26] = {'\0'};
    for(int i = 0 ; i < 26 ; i++)
    {
        p[max][i] = large_table[i];
        for(int j = max - 1 ; j >=max + 1 - cnt[i] ; j--)
        {
            p[j][i] = c;
        }
    }
    for(int j = 0 ; j < 26 ; j++)
    {
        for(int i = max ; i >= 0 ; i--)
        {
            printf("%c" , p[i][j]);
        }
    }
    system("pause");
    return 0;
}
