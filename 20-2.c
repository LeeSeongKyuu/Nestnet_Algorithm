#include <stdio.h>

int main(void)
{
	int  count = 0;
	int arr[42] = { 0 };
	int num[10] = { 0 };


	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);

		arr[num[i] % 42]++;  // 다른것의 개수를 찾아야 하므로 입력받은 정수를 나눈 값을 나올 수 있는 나머지로 본다.
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] >= 1) count++; // 나머지는 0에서 41까지 나올 수 있으므로 모든 경우의 수를 찾아봐서 1이상이면 1개 이상 나온 것이므로 개수에 포함시킨다.
	}

	printf("%d", count);

	return 0;
}



