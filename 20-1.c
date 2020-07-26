#include <stdio.h>

int main(void)
{
	int a[4] = { 0, };
	int count = 0;
	

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
 			scanf("%d", &a[j]);
			if (a[j] == 1)   //윷이 배면 0 등이면 1이다.
			{
				count++;
			}
			
		}
		switch (count)
		{
		case 0:
			printf("D\n");
			count = 0;
			break;
		case 1:
			printf("C\n");
			count = 0;
			break;
		case 2:
			printf("B\n");
			count = 0;
			break;
		case 3:
			printf("A\n");
			count = 0;
			break;
		case 4:
			printf("E\n");
			count = 0;
			break;
		}
	
	}
	return 0;
}