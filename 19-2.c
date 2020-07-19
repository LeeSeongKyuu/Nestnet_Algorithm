#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int D, R = 0;
	int MAX = 0;
	int SUM = 0;
	
	/* D = 내린 사람 수
	   R = 타는 사람 수
	   MAX = 기차안에 있는 사람의 최대 수
	   SUM = 비교하기 전 사람들의 합 */
	
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