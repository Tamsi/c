#include <stdio.h>

int main(int argc, char const *argv[]) {

	char e='*';
	int i;
	int j;
	int k;

	for(i=0; i<10; i++) {
		for(k=10; k>=i; k--) {
			printf(" ");
		}
		for(j=0; j<=i*2; j++) {
			printf("%c", e);
		}
		printf("\n");
	}
	for(i=0; i<3; i++) {
		printf("          @@@\n");
	}

	return 0;
}