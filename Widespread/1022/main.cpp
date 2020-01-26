#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	cin >> s;
	float A = 0 , b = 0;
	int sl = s.length();
	int flag;
	for(int i = 0 ; i < sl ; i++)
	{
		if(s[i] == '=')
			flag = i;
	}
	for(int i = 0 ; i < sl ; i++)
	{
		if(s[i] == '-' || s[i] == '+' || s[i] == '=')
			continue;
		if(isalpha(s[i]))
		{
			if(i < flag)
			{
				if(s[i - 1] == '-')
					A = A - 1;
 				if(s[i - 1] == '+' || i == 0)
				 	A = A + 1;
			}
			if(i > flag)
			{
				if(s[i - 1] == '-')
					A = A + 1;
 				if(s[i - 1] == '+' || i - 1 == flag)
				 	A = A - 1;
			}
		}
		if(i < flag)
		{
 			if(!isalpha(s[i + 1]))
			{
				if(s[i - 1] == '-')
					b = b + s[i] - '0';
 				if(s[i - 1] == '+' || i - 1 == 0)
				 	b = b - (s[i] - '0');
			}
			else
			{
				if(s[i - 1] == '-')
					A = A - (s[i] - '0');
 				if(s[i - 1] == '+' || i == 0)
				 	A = A + s[i] - '0';
			}
			
		}
		if(i > flag)
		{
			if(!isalpha(s[i + 1]))
			{
				if(s[i - 1] == '-')
					b = b - (s[i] - '0');
 				if(s[i - 1] == '+' || i - 1 == flag)
				 	b = b + s[i] - '0';
			}
			else
			{
				if(s[i - 1] == '-')
					A = A + s[i] - '0';
 				if(s[i - 1] == '+' || i -1 == flag)
				 	A = A - (s[i] - '0');
			}	
		}
		cout << A << " " << b << endl;		
	}
	cout << A << " " << b << endl;
	printf("%.3f\n" , b / A);
	system("pause");
	return 0;
}