#include<stdio.h>



int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	(a > b && a > c) ? printf("A is greater") : (b > a && b > c) ? printf("B is greater") : printf("C is greater");
	

	return 0;
}