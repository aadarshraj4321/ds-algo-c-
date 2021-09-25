#include<stdio.h>

int main() {

	int qan_sold, price, tax;
	scanf("%d %d %d", &qan_sold, &price, &tax);


	float finalPrice = (qan_sold > 500 && price > 2000) ? price * (100 - 10) : price * (100 - 2);
	printf("%f", finalPrice + tax);

	return 0;
}