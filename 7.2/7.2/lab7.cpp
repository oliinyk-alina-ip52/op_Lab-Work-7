#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>

using namespace std;

const int n = 100;
void word();
void inp_symbols();
char a[50];
char s[n];
int k=0,d,b;

int main()
{
	printf("enter string with symbols : ");
	inp_symbols();
	printf("enter string with words: ");
	do{
		word();
	} while (a != "quit");
	system("pause");
}

void inp_symbols()
{
	do
	{
		s[k] = _getche();
		k++;
	} while (s[k - 1] != 27);
	k--;
	printf("\n");
}

void word()
{
	int m;
	cin.getline(a, 50);
	for (int i = 0; i < k; i++)
	{
		if (a[0] == s[i])
			d = 1;
	}
	if (d==1)
	for (int i = 0; i < k;i++)
	if (a[strlen(a) - 1] == s[i])
		b = 1;
	if (d == 1 && b == 1)
		printf("\n%s", a);
	d = 0;
	b = 0;
}