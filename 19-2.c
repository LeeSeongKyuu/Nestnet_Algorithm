#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int D, R = 0;
	int MAX = 0;
	int SUM = 0;
	
	/* D = ���� ��� ��
	   R = Ÿ�� ��� ��
	   MAX = �����ȿ� �ִ� ����� �ִ� ��
	   SUM = ���ϱ� �� ������� �� */
	
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &D, &R);
		
		SUM += R - D;
		
		if (MAX < SUM) {
			MAX = SUM;
		}
	}
	printf("%d", MAX);
	return 0;
}