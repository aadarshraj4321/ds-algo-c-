#include<stdio.h>


int main() {

	char s[] = "Hello";

	int i = 0;
	while(s[i] != '\0') {
		i++;
	}

	printf("%d", i);


	return 0;
}