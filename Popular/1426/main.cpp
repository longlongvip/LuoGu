#include<cstdio>
#include<climits>
#include<iostream>
using namespace std;
int main(){
    float n , x;
    cin >> n >> x;
    float d = 0 , s = 7;
    int t = 0;
    while(d <= n - x)
    {
        
        t = t + 1;
        d = d + s;
        s = s * 0.98;   
    }
    if(s > 2 * x)
        cout << 'n';
    else
        cout << 'y'; 
    system("pause");
    return 0;
}
