#include <stdio.h>
#include <stdlib.h>

int main() 
{
	while (1)
	{
		int tt = 0;
		printf("�п�J�~��N�X(-1 to end) : ");
		scanf_s("%d", &tt);
		if (tt == -1)break;
		float m, h, s = 0;
		switch (tt)
		{
		case 1:

			printf("�п�J�g�~ : ");
			scanf_s("%f", &m);
			printf("�g�~��$%2lf", m);
			break;
		case 2:

			printf("�п�J���~ : ");
			scanf_s("%f", &m);
			printf("�п�J�ɼ� : ");
			scanf_s("%f", &h);

			if (h > 40)
			{
				s = 40 * m + 1.5 * (h - 40) * m;
			}
			else
			{
				s = m * h;
			}

			printf("�g�~��$%.2lf", s);
			break;
		case 3:

			printf("�п�J��g�P����B : ");
			scanf_s("%f", &m);
			printf("�g�~��$%.2lf", m * 0.057 + 250);
			break;
		case 4:

			printf("�п�J�Ͳ���� : ");
			scanf_s("%f", &s);
			printf("�п�J���S�� : ");
			scanf_s("%f", &m);
			printf("�g�~��$%.2lf", s * m);
			break;

		default:
			printf("Error\n");
			break;
		}
		printf("\n");

	}

	system("pause");
	return 0;
}