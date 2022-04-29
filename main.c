#include <stdio.h>
#include <string.h>

#include "chiffrerCesar.h"
#include "dechiffrerCesar.h"
#include "chiffrerVigenaire.h"
#include "dechiffrerVigenaire.h"
#include "convertir.h"
#include "verifier.h"
#include "écritureCesar.h"
#include "écritureVigenaire.h"
#include "convertir.h"
#include <string.h>

#define LG_CHAINE 100


void main() {
	//Il faut faire un make test pour utiliser le programme (sous linux)
	char str[LG_CHAINE];
	char str2[LG_CHAINE];
	int clé;
	char clé2[LG_CHAINE];
	char* res;
	char* res2;
	int ver;
	char algo, chiffre;
	
	FILE* fic;
	fic = fopen("resultat.txt", "w");
	fclose(fic);
	
	while (strcmp("stop\n",str)!=0) {
		printf("Entrez la phrase que vous souhaitez chiffrer ou déchiffrer (ou stop si vous souhaitez arrêter) : ");
		fgets(str, LG_CHAINE, stdin);
		//str = convertir(str);
		//strcpy(str,convertir(str));
		strcpy(str2,str);
		if (strcmp("stop\n",str)==0) {
			break;
		}
		
		ver = verifier(str);
		if (ver==0) {
			printf("\nVous avez utilisé des caractères spéciaux\n\n");
		}
		else{
		printf("\nSouhaitez vous chiffrer ou déchiffrer ? ('c' pour chiffrer, 'd' pour déchiffrer) ");
		scanf("%c%*c", &chiffre);
		printf("\nQuel algorithme souhaitez vous utiliser ? ('c' pour César, 'v' pour Vigénaire) ");
		scanf("%c%*c", &algo);
		if (algo == 'c') {
			printf("\nEntrez la clé que vous souhaitez utiliser : ");
			scanf("%d%*c",&clé);
			
			if (chiffre == 'c') {
				res = chiffrerCesar(1,clé,str2);
				écritureCesar(str,clé,res,1);
				printf("\nLa phrase chiffrée est la suivante : %s",res);
			}
   
			else if (chiffre == 'd') {
				res2 = dechiffrerCesar(1,clé,str2);
				écritureCesar(str,clé,res,2);
				printf("\nLa phrase déchiffrée est la suivante : %s\n",res2);
			}
		}
		else if (algo == 'v') {
			printf("\nEntrez la clé que vous souhaitez utiliser : ");
			fgets(clé2, LG_CHAINE, stdin);
			
			if (chiffre == 'c') {
				res = chiffrerVigenaire(1,clé2,str2);
				écritureVigenaire(str,clé2,res,1);
				printf("\nLa phrase chiffrée est la suivante : %s",res);
			}
			
			else if (chiffre == 'd') {
				res2 = dechiffrerVigenaire(1,clé2,str2);
				écritureVigenaire(str,clé2,res,2);
				printf("\nLa phrase déchiffrée est la suivante : %s\n",res2);
			}
		}
		else {
			printf("Vous n'avez pas utilisé la bonne lettre");
		}
	}
}
}
