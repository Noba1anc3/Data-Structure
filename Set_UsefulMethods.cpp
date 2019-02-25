#include <set>

scanf("%d", &n);
set<int> *st = new set<int>[n];

for (int i = 1; i <= n; i++)
{
	scanf("%d", &m);
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &t);
		st[i].insert(t);
	}
}

for (set<int>::iterator it = st[i2].begin(); it != st[i2].end(); it++)
{
	if (st[i1].find(*(it)) != st[i1].end())
		count++;
	else
		total++;
}
