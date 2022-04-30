/******************************************************************************
*  ASR => R2.04                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :  Chiffrement de messages                                        *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :       Veslin-Lucas                                           *
*                                                                             *
*  Nom-prénom2 :       Launay-Matthis                                         *
*                                                                             *
*  Nom-prénom3 :       Yu-Kunpeng                                             *
*                                                                             *
*  Nom-prénom4 :       Navarrete_Falconio-Pablo                               *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :  dechiffrerVigenere.c						              *
*                                                                             *
******************************************************************************/



#define LG_CHAINE 100
#include <string.h>
#include <ctype.h>

char* dechiffrerVigenere(char* clé, char phrase[LG_CHAINE+1]) {
	int lenMsg = strlen(phrase)-1;
	int lenClé = strlen(clé)-1;
	char clé2[LG_CHAINE+1];
	int i,j;
	
	for(i = 0, j = 0; i < lenMsg; ++i, ++j){
		if (phrase[i] != ' ') {
			if(j == lenClé)
				j = 0;
			if isupper(clé[i]) {
				clé2[i] = clé[j];
			}
			else{
				clé2[i] = toupper(clé[j]);
			}
		}
		else {
			j-=1;
		}
    }
	clé2[i] = '\0';
		
	for(int i=0;i<strlen(phrase);i++) {
		if (phrase[i] >= 'A' && phrase[i]<= 'Z') {
			char c = (phrase[i] - clé2[i] + 26) % 26;
			phrase[i] = c + 'A';
		}
		else if (phrase[i] >= 'a' && phrase[i]<= 'z') {
			char t = toupper(phrase[i]);
			char c = (t - clé2[i] + 26) % 26;
			phrase[i] = c + 'a';
		}
	}
	return phrase;
}	
