#include <stdio.h>

int main(void)

{
	char arr[101] = { 0, };

	scanf("%s", arr);

	for (int i = 0; i < 100; i++)
	{

		if (arr[i] == '\0')
			break;
		printf("%c", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}