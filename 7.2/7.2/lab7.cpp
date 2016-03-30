#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>

using namespace std;

const int n = 100;
char s[n];
char a[n],c;
void word();
void inp_symbols();

int main()
{
	printf("enter string with symbols : ");
	inp_symbols();
	printf("enter string with words: ");
	
	system("pause");
}

void inp_symbols()
{
	int k = 0;
	do
	{
		s[k] = _getche();
		k++;
	} while (s[k - 1] != 27);
	k--;
	printf("\n");
}
