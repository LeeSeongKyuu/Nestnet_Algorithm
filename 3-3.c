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
	 
	max = min = b[i]; // �ּҰ��� �ִ밪�� ���ʰ����� �θ� ��� ���� ���ϱ� ������ ������ ����.

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