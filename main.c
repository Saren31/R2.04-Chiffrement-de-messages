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
*  Nom du fichier :  main.c								                      *
*                                                                             *
******************************************************************************/



#include <stdio.h>
#include <string.h>

#include "Code/chiffrerCesar.h"
#include "Code/dechiffrerCesar.h"
#include "Code/chiffrerVigenere.h"
#include "Code/dechiffrerVigenere.h"
#include "Code/convertir.h"
#include "Code/verifier.h"
#include "Code/écritureCesar.h"
#include "Code/écritureVigenere.h"
#include "Code/convertir.h"
#include "Code/verifierClé.h"

#define LG_CHAINE 100


void main() {
	char str[LG_CHAINE+1];
	char str2[LG_CHAINE+1];
	int clé;
	char clé2[LG_CHAINE];
	char* res;
	int ver;
	int chiffre;
	int c;
	
	FILE* fic;
	fic = fopen("resultat.txt", "w");
	fclose(fic);
	
	while (chiffre != 5) {
		chiffre = 0;
		printf("Choisissez le numéro correspondant à l'option que vous voulez utiliser : \n");
		printf("1 - Chiffrer un message avec l'algorithme de César\n");
		printf("2 - Chiffrer un message avec l'algorithme de Vigenère\n");
		printf("3 - Déchiffrer un message avec l'algorithme de César\n");
		printf("4 - Déchiffrer un message avec l'algorithme de Vigenère\n");
		printf("5 - Quitter l'application\n");
		scanf("%d%*c",&chiffre);
		
		switch(chiffre) {
			case 1:
				printf("\nEntrez le message que vous souhaitez chiffrer avec l'algorithme de César : \n");
				fgets(str, LG_CHAINE, stdin);
				strcpy(str2,str);
				// Hélas la fonction convertir ne fonctionne pas
				//strcpy(str,convertir(str));
				ver = verifier(str);
				if (ver==0) {
					printf("\nVous avez utilisé des caractères spéciaux\n\n");
				}
				else {
					printf("\nEntrez la clé que vous souhaitez utiliser : \n");
					scanf("%d%*c",&clé);
					if (verifierClé(clé) == 1) { 
						res = chiffrerCesar(clé,str2);
						écritureCesar(str,clé,res,1);
						printf("\nLa phrase chiffrée est la suivante : %s\n",res);
						clé = 'a'; //Si on réussi son premier chiffrement mais pas son second, ne pas assigner la clé à une valeur incorrecte après le premier chiffremet pose des problèmes
					}
					else {
						printf("\nLa clé n'est pas valide (elle doit être comprise entre -26 et 26)\n\n");
						do{
						c = getchar();
						}while(c != EOF && c != '\n');
					}
				}
				break;
			case 2:
				printf("\nEntrez le message que vous souhaitez chiffrer avec l'algorithme de Vigenère : \n");
				fgets(str, LG_CHAINE, stdin);
				strcpy(str2,str);
				ver = verifier(str);
				if (ver==0) {
					printf("\nVous avez utilisé des caractères spéciaux\n\n");
				}
				else {
					printf("\nEntrez la clé que vous souhaitez utiliser : ");
					fgets(clé2, LG_CHAINE, stdin);
					if (verifier(clé2) == 1) {
						res = chiffrerVigenere(clé2,str2);
						écritureVigenere(str,clé2,res,1);
						printf("\nLa phrase chiffrée est la suivante : %s\n",res);
					}
					else {
						printf("\nLa clé n'est pas valide (elle ne doit contenir que des lettres de l'alphabet)\n\n");
					}
				}
				break;
			case 3:
				printf("\nEntrez le message que vous souhaitez déchiffrer avec l'algorithme de César : \n");
				fgets(str, LG_CHAINE, stdin);
				strcpy(str2,str);
				ver = verifier(str);
				if (ver==0) {
					printf("\nVous avez utilisé des caractères spéciaux\n\n");
				}
				else {
					printf("\nEntrez la clé que vous souhaitez utiliser : \n");
					scanf("%d%*c",&clé);
					if (verifierClé(clé) == 1) { 
						res = dechiffrerCesar(clé,str2);
						écritureCesar(str,clé,res,2);
						printf("\nLa phrase déchiffrée est la suivante : %s\n",res);
						clé = 'a';
					}
					else {
						printf("\nLa clé n'est pas valide (elle doit être comprise entre -26 et 26)\n\n");
						do{
						c = getchar();
						}while(c != EOF && c != '\n');
					}
				}
				break;
			case 4:
				printf("\nEntrez le message que vous souhaitez déchiffrer avec l'algorithme de Vigenère : \n");
				fgets(str, LG_CHAINE, stdin);
				strcpy(str2,str);
				ver = verifier(str);
				if (ver==0) {
					printf("\nVous avez utilisé des caractères spéciaux\n\n");
				}
				else {
					printf("\nEntrez la clé que vous souhaitez utiliser : ");
					fgets(clé2, LG_CHAINE, stdin);
					if (verifier(clé2) == 1) {
						res = dechiffrerVigenere(clé2,str2);
						écritureVigenere(str,clé2,res,2);
						printf("\nLa phrase déchiffrée est la suivante : %s\n",res);
					}
					else {
						printf("\nLa clé n'est pas valide (elle ne doit contenir que des lettres de l'alphabet)\n\n");
					}
				}
				break;
			case 5:
				break;
			default:
				printf("\nVous ne pouvez utiliser que des chiffres entre 1 et 5 ! \n\n");
		}
	}
	printf("Le fichier resultat.txt résume ce que vous venez de faire dans cette application\n");
}

