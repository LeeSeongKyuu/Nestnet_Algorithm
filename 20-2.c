#include <stdio.h>

int main(void)
{
	int  count = 0;
	int arr[42] = { 0 };
	int num[10] = { 0 };


	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);

		arr[num[i] % 42]++;  // �ٸ����� ������ ã�ƾ� �ϹǷ� �Է¹��� ������ ���� ���� ���� �� �ִ� �������� ����.
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] >= 1) count++; // �������� 0���� 41���� ���� �� �����Ƿ� ��� ����� ���� ã�ƺ��� 1�̻��̸� 1�� �̻� ���� ���̹Ƿ� ������ ���Խ�Ų��.
	}

	printf("%d", count);

	return 0;
}



