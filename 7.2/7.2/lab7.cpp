#include<iostream>
#include<cstring>
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
	char *next1 = NULL;
	char *next2 = NULL;
	int len = 0;
	char *tok = strtok_s(b, seps, &next1);
	char *t = strtok_s(c, seps, &next2);
	while ((tok != NULL)||(t != NULL)){
			len = strlen(b);
			if (tok[0] == t[0] && tok[len - 1] == t[0])
			printf("%s\n", tok);
			t = strtok_s(NULL, seps, &next2);
		tok = strtok_s(NULL, seps, &next1);
	}
	}
