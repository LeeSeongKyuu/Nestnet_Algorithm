#include <stdio.h>

int main(void)
{
	int T, V, E, F = 0;
	/* T�� �׽�Ʈ���̽��� ����
	   V�� �������� ���� 
	   E�� �𼭸��� ����
	   F�� ���� ����
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