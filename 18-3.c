#include <stdio.h>

int main(void)
{

	int T, N, M, U, V = 0;
	/* N = ��� �� �ٸ� ��
	   M = ���� ��
	   U = �ٸ��� �߸� ���� ��
	   V = ������ ���� ��
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