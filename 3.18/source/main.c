#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float a = 200;
	float s = 0;

	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &s);
		if (s == -1)break;
		printf("Salary is %.2lf\n", a + 0.09 * s);
		printf("\n");
	}
	system("pause");
	return 0;
}