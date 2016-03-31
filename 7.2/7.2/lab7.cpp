#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>

using namespace std;

const int n = 100;
void word(char *, char*);
void inp_symbols(char[]);
char a[n];
char s[n];
int k=0,d,b;

int main()
{
	printf("enter string with symbols : ");
	inp_symbols(a);
	printf("enter string with words: ");
	do{
		word(s,a);
	} while (s[k-1] !=27);
	system("pause");
}

void inp_symbols(char q[n] )
{
	do
	{
		q[k] = _getche();
		k++;
	} while (q[k - 1] != 13);
	k--;
	printf("\n");
}

void word(char *p, char*t)
{
	int m;
	cin.getline(p, 50);
	for (int i = 0; i < k; i++)
	{
		if (p[0] == t[i])
			d = 1;
	}
	if (d==1)
	for (int i = 0; i < k;i++)
	if (p[strlen(p) - 1] == t[i])
		b = 1;
	if (d == 1 && b == 1)
		printf("%s\n", p);
	d = 0;
	b = 0;
}