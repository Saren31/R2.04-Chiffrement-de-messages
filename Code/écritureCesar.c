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
*  Nom du fichier :  écritureCesar.c									      *
*                                                                             *
******************************************************************************/



#include <stdio.h>

void écritureCesar(char* str, int clé, char* res, int choix) {
	FILE* fic;
	fic = fopen("resultat.txt", "a");
	if (choix == 1) {
		fprintf(fic, "Le message initial est : %s", str);
		fprintf(fic, "Il est chiffré avec l'algorithme de César\n");
		fprintf(fic, "La clé est : %d\n", clé);
		fprintf(fic, "Le message chiffré est : %s\n", res);
	}
	else if (choix == 2) {
		fprintf(fic, "Le message chiffré est : %s", str);
		fprintf(fic, "Il est chiffré avec l'algorithme de César\n");
		fprintf(fic, "La clé est : %d\n", clé);
		fprintf(fic, "Le message déchiffré est : %s\n", res);
	}
	fprintf(fic, "___\n\n");
	fclose(fic);
}