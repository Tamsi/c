#include <stdio.h>

int max(n, b);
void afficheInt(int c);

int main() {
	int x;
	int y;

	printf("saisissez une valeur:\n");
	scanf("%d", &y);
	scanf("%d", &x);
	afficheInt(max(x, y));

	return 0;
}

int max(int x, int y) {

	if (x>=y) {
		return x;
	}
	
	return y;

}

void afficheInt(int c) {
	printf("%d", c);
}