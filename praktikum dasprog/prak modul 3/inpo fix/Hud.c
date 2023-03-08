#include <stdio.h>
int N, S, x, a[205], save = 200;
	
void find(int var, int ttl, int pic)
{
	if(var<N && ttl<S)
	{
		find(var+1, ttl, pic);
		find(var+1, ttl+a[var+1], pic+1);
	}
	else if(var<=N && ttl==S && pic<save)
		save = pic;
}

int main()
{
	scanf("%d%d", &N, &S);
	for(x=1; x<=N; x++)
		scanf("%d", &a[x]);
	find(0, 0, 0);
	printf("%d", save);
}
