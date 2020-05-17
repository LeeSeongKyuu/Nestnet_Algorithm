#include <stdio.h>

int main(void)
{
	int t, A, B = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &A,&B);
		printf("%d", A + B);

	}
	return 0;

}