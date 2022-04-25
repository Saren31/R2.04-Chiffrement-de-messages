#define LG_CHAINE 100
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* dechiffrer(int choix, int clé, char phrase[LG_CHAINE+1]) {
	if (choix == 1) {
		
		for(int i=0;i<strlen(phrase);i++) {
			if (phrase[i] >= 'A' && phrase[i]<= 'Z') {
				char c = phrase[i] - 'A';
				c -= clé;
				c = c % 26;
				phrase[i] = c + 'A';
				if (c + 'A' < 'A') {
					phrase[i]+= 26;
				}
			}
			else if (phrase[i] >= 'a' && phrase[i]<= 'z') {
				char c = phrase[i] - 'a';
				c -= clé;
				c = c % 26;
				phrase[i] = c + 'a';
				if (c + 'a' < 'a') {
					phrase[i]+= 26;
				}
			}
		}
	}
	return phrase;
}	
