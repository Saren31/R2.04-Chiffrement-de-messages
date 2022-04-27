#define LG_CHAINE 100
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* chiffrer(int choix, int clé, char phrase[LG_CHAINE+1]) {
	if (choix == 1) {
		for(int i=0;i<strlen(phrase);i++) {
			if (phrase[i] >= 'A' && phrase[i]<= 'Z') {
				char c = phrase[i] - 'A';
				c += clé;
				c = c % 26;
				phrase[i] = c + 'A';
			}
			else if (phrase[i] >= 'a' && phrase[i]<= 'z') {
				char c = phrase[i] - 'a';
				c += clé;
				c = c % 26;
				phrase[i] = c + 'a';
			}
			else if (phrase[i] >= '0' && phrase[i]<= '9') {
				char c = phrase[i] - '0';
				c += clé;
				c = c % 10;
				phrase[i] = c + '0';
			}
		}
	}
	return phrase;
}	
