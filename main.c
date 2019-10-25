#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FOR(n) for (int i = 0; i < n; i++)

typedef struct value {
	double x, fx;
}val;

int main() {
	int	n; 
	double x;

	printf("n x\n");
	scanf("%i %lf", &n, &x);

	printf("\nCoordinates: \n");

	val* v = (val*)malloc( sizeof(val) * n );
	double* l = (double*)malloc( sizeof(double) * n );

	FOR(n) {
		scanf("%lf %lf", &v[i].x, &v[i].fx);
	}

	double res = 0.0;

	FOR(n) {
		l[i] = 1;
		for (int j = 0; j < n; j++) {
			if (j != i) {
				l[i] *= ((x - v[j].x) / (v[i].x - v[j].x));
			}
		}
		printf("\nL%i = %lf", i, l[i]);
		l[i] *= v[i].fx;
		res += l[i];
	}


	printf("\n");
	//FOR(n) {
	//	printf("L%i = %lf\n", i, l[i]);
	//	res += l[i];
	//}

	printf("\ny(x) = %lf", res);

	free(v);
	free(l);

	getchar(); getchar();
	return 0;
}