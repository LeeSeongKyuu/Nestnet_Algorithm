#include <stdio.h>

int main(void)
{

	int n, T, sum = 0, count = 0;
	int a[51] = { 0, };

	scanf("%d %d", &n, &T);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
		for (int j = 0; j < n; j++)
		{
			sum += a[j];

			if (sum >T) //=이 들어가면 왜 안되는가..?
				break;
			
			else
				
				count+=1;
		}
		printf("%d", count);
	return 0;
}