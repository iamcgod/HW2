#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float a, b, c, d, e;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)break;

		printf("Enter beginning balance: ");
		scanf_s("%f", &b);
		printf("Enter total charges: ");
		scanf_s("%f", &c);
		printf("Enter total credits: ");
		scanf_s("%f", &d);
		printf("Enter credits limit: ");
		scanf_s("%f", &e);

		if ((b + c - d) > e) {
			printf("Account:\t%.0lf\n", a);
			printf("Credit limit:\t%.2lf\n", e);
			printf("Balance:\t%.2lf\n", b + c - d);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");

	}
}