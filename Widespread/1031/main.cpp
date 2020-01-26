#include<cstdio>
#include<iostream>
#include<stdio.h>
int main()
{
	int n,a[1000],s=0,t=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	s/=n;
	for(int i=1;i<n;i++)
		if(a[i]!=s)
		{
			t++;
			a[i+1]-=s-a[i];
			a[i]+=s-a[i];
		}
	printf("%d",t);
    system("pause");
}