#include<stdio.h>



int main() {

	int a = 10;
	float b = 10;
	char c = 'd';
	double d = 100;

	//enum months {jan, feb, mar, apr, may, june, july, aug, sep, oct, nov, dec};

	printf("%d, %f, %c, %d", a, b, c, d);
	printf("%c",'\n');
	printf("%d, %d, %d, %d", sizeof(a), " ", sizeof(b), " ", sizeof(c), " ", sizeof(d));


	return 0;
}