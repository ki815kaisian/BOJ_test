#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main(void)
{
	int r;

	scanf("%d", &r);

	double euclidean;
	double taxi;

	euclidean = r*r*M_PI;
	taxi = r*r * 2;

	printf("%.6lf\n", euclidean);
	printf("%.6lf\n", taxi);

	return 0;
}