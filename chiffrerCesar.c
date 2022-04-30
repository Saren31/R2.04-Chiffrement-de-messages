#define LG_CHAINE 100
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* chiffrerCesar(int clé, char phrase[LG_CHAINE+1]) {
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
		}
	return phrase;
}	
