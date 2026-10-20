#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

double calculateQ(double X) {
	if (X < 2) {
		return (X - 2) * (X - 2) / 1.0 + 10;
	}
	else if (X >= 2 && X <= 5) {
		return 3.0 * (X - 3.5) + 50.0;
	}
	else {
		return 2.0 * sqrt(X - 5 + 1) + 60.0;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	double X, Q;
	printf("Введите значение давления инертного газа (от 1 до 8 бар): ");
	if (scanf("%lf", &X) != 1) {
		printf("Введено не число\n");
		return 1;
	}
	if (X < 1 || X > 8) {
		printf("Введенное значение выходит за рабочий диапазон [1...8].\n", X);
		return 1;
	}
	Q = calculateQ(X);
	printf("Для X = %.2f бар, рассчитанное значение Q = %.4f\n", X, Q);
	return 0;
}
