#include<stdio.h>

int main() {
	
	int a, b, tmp;
	scanf("%d %d", &a, &b);

	tmp = b;
	b = a;
	a = tmp;

	printf("%d %d", a, b);
	return 0;
}