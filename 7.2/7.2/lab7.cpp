#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

const int n = 100;
void word(char *, char*);
void inp_symbols(char[]);
char a[n];
char s[n];
char b[5] = " ,." ;
int k=0,d,c,m=0;
typedef char o[n][n];
o mas;

int main()
{
	printf("enter string with words: ");
	cin.getline(s, 50);
	printf("\nenter string with symbols : ");
	inp_symbols(a);
	word(s, a);
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

/*void words(char *w)
{
	char *tok;
	char *next = NULL;
	char o[n][n];
	for (tok = strtok_s(w, b, &next); tok; tok = strtok_s(NULL, b, &next)){
		strcpy(o[m], tok);
		m++;
	}
}*/

void word(char *p, char*t)
{
	char *tok;
	char *next = NULL;
	for (tok = strtok_s(p, b, &next); tok; tok = strtok_s(NULL, b, &next)){
		strcpy_s(mas[m], tok);
		m++;
}
	/*for (int i = 0;i < m;i++)
		printf("%s\n", mas[i]);*/
	for (int j = 0; j < m; j++){
		for (int i = 0; i < k; i++)
		{
			if (mas[j][0] == t[i])
				d = 1;
		}
		if (d == 1)
		for (int i = 0; i < k; i++)
		if (mas[j][strlen(mas[j]) - 1] == t[i])
			c = 1;
		if (d == 1 && c == 1)
			printf("%s\n", mas[j]);
		d = 0;
		c = 0;
	}
}