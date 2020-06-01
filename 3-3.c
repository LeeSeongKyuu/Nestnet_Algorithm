#include <stdio.h>

int main()
{
	int a, max, min = 0;

	scanf("%d", &a);

	int* b = malloc(sizeof(int) * a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}

	int i = 0;
	 
	max = min = b[i]; // 최소값과 최대값을 최초값으로 두면 모든 값을 비교하기 때문에 문제가 없다.

	do {
		if (b[i] >= max)
		{
			max = b[i];
		}

		if (b[i] <= min)
		{
			min = b[i];
		}

		i++;
	}

	while (i < a);
	printf("%d %d", min, max);


	return 0;
}