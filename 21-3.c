#include <stdio.h>

int main(void)
{

	int n = 0, min = 0, max = 0, sub = 0;
	int a[1001] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	min = max = a[0];
	for (int j = 0; j < n; j++) 
	{
		if (a[j] > max)
			max = a[j];
		else if
			(a[j] < min)
			 min = a[j];
	}

	sub = max - min;
	printf("%d", sub);

	return 0;
}
