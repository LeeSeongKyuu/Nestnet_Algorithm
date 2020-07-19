#include <stdio.h>

int main(void)
{
	int a, b, c, d, e = 0;

	int min_a, min_b, Best = 0;


	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);


	if (a <= b)
	{
		if (a <= c)
			min_a = a;    // bac cba를 포함 
		else
			min_a = c;   // bac
	}
	else
	{
		if (b <= a)
		{
			if (b <= c)    // acb cab를 포함
				min_a = b;
			else
				min_a = c; //   abc
		}
	}

	if (d <= e)

		min_b = d;
	else
		min_b = e;

	Best = min_a + min_b - 50;

	printf("%d", Best);

	return 0;

}