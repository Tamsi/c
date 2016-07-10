#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int nb1 = 0;
	int nb2 = 100;
	int compteur=0;
	

	srand(time(NULL));
	nb1 = rand() %100;
	printf("devine mon nombre entre 0 et 99 : ");
	do {
		scanf("%d", &nb2);
		compteur = compteur+1;
		if(nb2>nb1) {
			printf("moins\n retente : ");
		} else if (nb2<nb1) {
			printf("plus\n retente : ");
		} else {
			printf("gagnai\n en %d coups : ", compteur);
		}
	} while (nb2!=nb1);

	return 0;
}