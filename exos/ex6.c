#include <stdio.h>

void ramures(int lignes);
void tronc(int hauteur, int largeur);

int main() {
	int nb;
	
	printf("lignes:");
	scanf("%d", &nb);

	ramures(nb);
	tronc(5, nb);

	return 0;
}

void tronc(int hauteur, int largeur) {
	int i=0;
	int j=0;

	for (i=0; i<hauteur; i++) {
		for(j=0; j<largeur; j++) {
			printf(" ");
		}
		printf("@@@\n");
	}
}

void ramures(int lignes) {
	int i=0;
	int j=0;
	int k=0;

	for(i=0; i<lignes; i++) {
		for(k=lignes; k>=i; k--) {
			printf(" ");
		}
		for(j=0; j<=i*2; j++) {
			printf("*");
		}
		printf("\n");
	}
}