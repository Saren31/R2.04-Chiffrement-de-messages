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
*  Nom du fichier :  verifier.c									              *
*                                                                             *
******************************************************************************/



#define LG_CHAINE 100
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int verifier(char phrase[LG_CHAINE+1]) {
	for(int i=0;i<strlen(phrase)-1;i++) {
			if (!((phrase[i] >= 'A' && phrase[i]<= 'Z') || (phrase[i] >= 'a' && phrase[i]<= 'z') || phrase[i] == ' ')){
				return 0;
			}
		}
	return 1;
}