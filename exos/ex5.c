#include <stdio.h>

void afficheNb(int n);

int main() {
	int x=10;

	afficheNb(&x);
	printf("%d\n", x);

	return 0;
}

void afficheNb(int* str_nb) {
	*str_nb = *str_nb+1;
	printf("%d\n", *str_nb);
}