#include <stdio.h>
#include <stdlib.h>

int main() 
{
	while (1)
	{
		int tt = 0;
		printf("請輸入薪資代碼(-1 to end) : ");
		scanf_s("%d", &tt);
		if (tt == -1)break;
		float m, h, s = 0;
		switch (tt)
		{
		case 1:

			printf("請輸入週薪 : ");
			scanf_s("%f", &m);
			printf("週薪為$%2lf", m);
			break;
		case 2:

			printf("請輸入時薪 : ");
			scanf_s("%f", &m);
			printf("請輸入時數 : ");
			scanf_s("%f", &h);

			if (h > 40)
			{
				s = 40 * m + 1.5 * (h - 40) * m;
			}
			else
			{
				s = m * h;
			}

			printf("週薪為$%.2lf", s);
			break;
		case 3:

			printf("請輸入當週銷售金額 : ");
			scanf_s("%f", &m);
			printf("週薪為$%.2lf", m * 0.057 + 250);
			break;
		case 4:

			printf("請輸入生產件數 : ");
			scanf_s("%f", &s);
			printf("請輸入單件酬勞 : ");
			scanf_s("%f", &m);
			printf("週薪為$%.2lf", s * m);
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