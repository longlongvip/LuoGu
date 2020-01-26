#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string star , team;
    cin >> star >> team;

    int S = 1 , T = 1;
    for(int i = 0; i < star.length(); i++)
    {
        S = S * (star[i] - 'A' + 1);
    }
    for(int i = 0; i < team.length(); i++)
    {
        T = T * (team[i] - 'A' + 1);
    }
    if(S % 47 == T % 47)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    
    system("pause");
    return 0;   
}
