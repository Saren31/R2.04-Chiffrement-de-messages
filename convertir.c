#define LG_CHAINE 100
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* convertir(char phrase[LG_CHAINE+1]) {
	char c;
	
	
	for(int i=0;i<strlen(phrase);i++) {
		c = phrase[i];
		if (c == 128) {
			phrase[i] = 'C';
		}
		else if (c == 135) {
			phrase[i] = 'c';
		}
		if (c == 154) {
			phrase[i] = 'U';
		}
	}
	return phrase;
}
