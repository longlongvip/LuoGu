#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[100000][5];
	int count , n , m;
	scanf("%d" , & count);
	for(int i = 0 ; i < count ; i++)
	{
		scanf("%d%d%d%d" , & a[i][0] , & a[i][1] , & n , & m);
		a[i][2] = a[i][0] + n;
		a[i][3] = a[i][1] + m;
	}
	scanf("%d%d" , & n , & m);
	for(int i = count - 1 ; i >= 0 ; i--)
	{
		if(n >= a[i][0] && n <= a[i][2] && m >= a[i][1] && m <= a[i][3])
		{
			printf("%d\n" , i+1);
            system("pause");
			return 0;
		}
	 }
	printf("-1\n");
    system("pause");
	return 0;
 }