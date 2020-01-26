#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[1001];
    nums[0] = 1 ; nums[1] = 1;
    for(int i = 2; i <= n ;i++)
    {
        if(i % 2 == 0)
            nums[i] = nums[i - 1] + nums[i / 2];
        else
        {
            nums[i] = nums[i - 1];
        }
    }
    cout << nums[n] << endl;
    system("pause");
    return 0;
}
