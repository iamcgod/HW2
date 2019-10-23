#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float h, s, t;

	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &h);
		if (h == -1)break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &s);
		if (h > 40) {
			t = 40 * s + (h - 40) * 1.5 * s;
		}
		else {
			t = s * h;
		}
		printf("The interest charge is $%.2lf\n", t);
	}
}