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
*  Nom du fichier :  chiffrerCesar.c								          *
*                                                                             *
******************************************************************************/



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
