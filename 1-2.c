#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a,&b);
	
	
	if (a > b)
	{
		printf(">");
		return 0;
	}
	else if (a < b)
	{
		printf("<");
		return 0;
	}
	else
		printf("==");

	return 0;

}