#include <stdio.h>

int main(void)
{

	int T, N, M, U, V = 0;
	/* N = 모든 닭 다리 수
	   M = 닭의 수
	   U = 다리가 잘린 닭의 수
	   V = 멀쩡한 닭의 수
	 */

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &N, &M);
		U = 2 * M - N;
		V= M - U;

		printf("%d %d\n", U, V);

	}

	return 0;
}