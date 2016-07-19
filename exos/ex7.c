#include <stdio.h>
#include <string.h>

int main() {
	char str_char[11];
	int i=0;

	for(i=0; i<10; i++) {
		str_char[i]=65+i;
	}
	str_char[10] = '\0';
	


	for(i=0; i<10; i++) {
		printf("ici:%c\n", str_char[i]);
	}


	return 0;
}