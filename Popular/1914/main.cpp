#include<cstdio>
#include<iostream>
#include<string>
char little_table[26] = {
    'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' ,
    'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' ,
    'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' ,
    'v' , 'w' , 'x' , 'y' , 'z' 
};
using namespace std;
int main(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    int l = input.length();
    for(int i = 0 ; i < l ; i++)
    {
        int index = input[i] - 'a';
        input[i] = little_table[(index + n) % 26];
    }
    for(int i = 0 ; i < l ; i++)
    {
        cout << input[i];
    }
    system("pause");
    return 0;
}
