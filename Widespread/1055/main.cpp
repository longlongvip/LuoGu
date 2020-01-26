#include<cstdio>
#include<iostream>
using namespace std;
int main(){
     char q[13];
     for (size_t i = 0; i < 13; i++)
     {
        char tmp;
        cin >> tmp;
        q[i] = tmp;
     }

     int sum = (q[0] - '0') * 1 +
           (q[2] - '0') * 2 +
           (q[3] - '0') * 3 +
           (q[4] - '0') * 4 +
           (q[6] - '0') * 5 +
           (q[7] - '0') * 6 +
           (q[8] - '0') * 7 +
           (q[9] - '0') * 8 +
           (q[10] - '0') * 9 ;
    int id = sum % 11;
    if( (id != 10 && id == (q[12] - '0') && q[12] != 'X')   ||  id == 10 && q[12] == 'X') 
        cout << "Right";
    else
    {
        for (size_t i = 0; i < 13; i++)
        {
            if(i == 12)
            {
                if(id == 10)
                    cout << "X";
                else
                    cout << id;
            }
            else
            {
             cout << q[i];
            }
        }
    }
    
    system("pause");
    return 0;   
}
