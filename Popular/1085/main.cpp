#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int max = 0;
    int index = 0;
    int a , b;
    for(int i = 1 ; i < 8 ; i++ )
    {
        cin >> a >> b;
        if( a + b <= 8)
            continue;
        else
        {
            if(max < a + b)
            {
                 max = a + b;
                 index = i;
            }
        }
    }
    cout << index;
    //system("pause");
}
