#include <stdio.h>

int main(void)
{
	int a, b, c, d,temp= 0;
	int n[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
			n[i] = a + b + c + d;
	}
	for (int i = 1; i < 5; i++)
	{
		if (n[i] > n[temp])
			temp = i;
	}

	printf("%d %d", temp + 1, n[temp]);

	return 0;

}