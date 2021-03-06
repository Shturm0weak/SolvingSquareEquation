#include "pch.h"
#include <iostream>

int main()
{
	double a = 2;
	double b = -8;
	double c = 0;

	if (a != 0 && b != 0) {
		double D = ((b*b) - 4 * a*c);
		if (D >= 0) {
			double x1 = (-b + sqrt(D)) / (2 * a);
			double x2 = (-b - sqrt(D)) / (2 * a);
			printf("Root 1 = %lf \nRoot 2 = %lf\n", x1, x2);
		}
		else {
			printf("D is less than null");
		}
	}
	else if(a > 0 && c < 0 || a < 0 && c > 0){
		double x1 = sqrt(-c / a);
		printf("Root 1 = %lf \nRoot 2 = %lf\n", x1, -x1);
	}
	else if (b != 0 && c != 0){
		double x1 = -c / b;
		printf("Root 1 = %lf\n", x1);
	}
	else{
		printf("This equation is unsolvable\n");
	}
}
