#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	double a;
	double b = 5000;
	double c = .05;

	unsigned int year;
	for (c = 0.1; c <= 0.125; c += 0.005) {

		printf("%4s%21s", "Year", "Amount on deposit");
		printf("(%.1lf) \n", c * 100);
		for (year = 1; year <= 15; ++year) {
			a = b * pow(1.0 + c, year);

			printf("%4u%21.2f\n", year, a);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}