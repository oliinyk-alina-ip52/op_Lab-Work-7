#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

const int n = 100;
char s[n];
char a[n];
char seps[] = " ,.!?\t\n";
void word(char *, char *);

int main()
{
	printf("enter string with words: ");
	gets_s(s);
	printf("enter string with symbols : ");
	gets_s(a);
	word(s, a);
	system("pause");
}

void word(char *b, char *c)
{
	char *token;
	char *t;
	char *next = NULL;
	int len = 0;
	for (char *t = strtok_s(c, seps, &next); t; t = strtok_s(NULL, seps, &next))
	for (char *tok = strtok_s(b, seps, &next); tok; tok = strtok_s(NULL, seps, &next))
	{
		len = strlen(b);		
			if (tok[0] == t[0] && tok[len - 1] == t[0])
				printf("%s\n", tok);
		}
}