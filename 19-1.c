#include <stdio.h>

int main(void)
{
	int T, V, E, F = 0;
	/* T는 테스트케이스의 개수
	   V는 꼭짓점의 개수 
	   E는 모서리의 개수
	   F는 면의 개수
	*/

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &V, &E);
		F = E - V + 2;
		printf("%d\n", F);
	}
	return 0;
}