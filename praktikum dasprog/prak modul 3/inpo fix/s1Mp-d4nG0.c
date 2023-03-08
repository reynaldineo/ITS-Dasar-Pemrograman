#include <stdio.h>
int n, k, d, i, dag[105], yes = 0;
	
void dango(int var, int pic, int ttl)
{
	if(var<n && pic<k && ttl<d)
	{
		dango(var+1, pic, ttl);
		dango(var+1, pic+1, ttl+dag[var+1]);
	}
	else if(var<=n && pic==k && ttl==d)
		yes = 1;
}

int main()
{
	scanf("%d%d", &n, &k);
	for(i=1; i<=n; i++)
		scanf("%d", &dag[i]);
	scanf("%d", &d);
	dango(0, 0, 0);
	if(yes==0)
		printf("Kosimp belum boleh pulang:(");
	else
		printf("KoSimp boleh pulang");
}
