#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int num;
    int own = 0;
    int month;
    int mother = 0;
    int nums[12] = {0};
    for(int i = 0 ; i < 12 ; i++ )
    {
        cin >> num;
        nums[i] = num;
    }
    for(int i = 0 ; i < 12 ; i++ )
    {
        own = own + 300 - nums[i];
        if(own < 0 )
        {
            month = - i - 1;
            break;
        }   
        if(own >= 100)
        {
            mother = own / 100 + mother;
        }
            own = own % 100;
    }
    if(own > 0)
        cout << own + mother * 120;
    else
    {
        cout << month;
    }
    
    //system("pause");
    return 0;
}
