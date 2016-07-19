#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool inArray(int n,int tableau[]);

int main() {
	int tableau[4] = {2, 3, 5, 7}, i = 0;
	int n=0;
	int compteur=0;

	printf("veuillez saisir un nb premier: ");

	while(compteur<4) {
		scanf("%d", &n);
		if(inArray(n, tableau)==true) {
			compteur++;
			printf("il vous reste %d \n", 6-compteur);
		}
	}

	return (0);
}


bool inArray(int n,int tableau[]) {
	int i;
	for(i=0; i<sizeof(tableau); i++) {
		if(n==tableau[i]) {
			return true;
		} 
	} 
	return false;
}