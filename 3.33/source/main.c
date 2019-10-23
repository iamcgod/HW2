#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float h, s, t;

	while (1)
	{
		int x, y;

		scanf_s("%d%d", &x, &y);

		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				if (j == 0 || j == y - 1 || i == 0 || i == x - 1)printf("*");
				else printf(" ");
			}
			printf("\n");

		}
		system("pause");
		return 0;
	}
}