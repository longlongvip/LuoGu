#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
    }
    int c = 0;
    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i - 1] >= arr[i])
        {
            if(arr[i] < arr[i + 1])
            {
                c = c + 1;
                i = i + 1;
            }
            if(arr[i] == arr[i + 1])
                c = c + 0;
        }     
    }
    cout << c;
    system("pause");
    return 0;   
}
