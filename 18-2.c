#include <stdio.h>

int main(void)
{
	int h1, m1, s1, h2, m2, s2 = 0;
	// h1,m1,s1은 출근시간 h2,m2,s2은 퇴근시간

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

		if (s1 > s2)
		{
			m2 = m2 - 1;
			s2 = s2 + 60;
		}
		if (m1 > m2)
		{
			h2 = h2 - 1;
			m2 = m2 + 60;
		}

		printf("%d %d %d\n", h2 - h1, m2 - m1, s2 - s1);

	}

	return 0;

}