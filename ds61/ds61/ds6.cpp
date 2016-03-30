#include<vector>
#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;

ifstream input;

const int m = 100;
int n, a, b, v, k;
vector<vector<int>> g(m);
vector<vector<int>>gr(m);
vector<int>used, list, component;

void dfs1(int v)
{
	used[v] = 1;
	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];
		if (!used[to]) dfs1(to);
	}
	list.push_back(v);
}

void dfs2(int v)
{
	used[v] = 1; component.push_back(v);
	for (int i = 0; i < gr[v].size(); i++)
	{
		int to = gr[v][i];
		if (!used[to]) dfs2(to);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	input.open("matr.txt");
	input >> n >> k;
	for (int i = 1; i <= k; i++){
		input >> a >> b;
		g[a].push_back(b);
		gr[b].push_back(a);
	}
	used.assign(n + 1, 0);
	for (int i = 1; i <= n; i++)
	if (!used[i])
		dfs1(i);
	used.assign(n + 1, 0);
	int c = 0;
	int p = 0;
	for (int i = 1; i <= n; i++)
	{
		v = list[n - i];
		if (!used[v])
		{
			component.clear();
			dfs2(v);
			c++;
			// вывод компоненты
			printf("Компоненты: %d: ", c);
			for (int j = 0; j < component.size(); j++){
				p++;
				printf("%d  ", component[j]);
			}
			cout << "  Количесвто: "<<p;
			p = 0;
			printf("\n");
		}
	}
	input.close();
	system("pause");
}