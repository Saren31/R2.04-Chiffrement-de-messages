#include <stdio.h>
#include <string.h>

#include "chiffrer.h"
#include "dechiffrer.h"
#include "convertir.h"
#include "verifier.h"
#include "écriture.h"
#include <string.h>

#define LG_CHAINE 100


// Il reste la gestion des accents et vigénaire à mettre en place
void main() {
	//Il faut faire un make test pour utiliser le programme (sous linux)
	char str[LG_CHAINE];
	char str2[LG_CHAINE];
	int clé;
	char* res;
	char* res2;
	int ver;
	
	while (strcmp("stop\n",str)!=0) {
		printf("Entrez la phrase que vous souhaitez chiffrer (ou stop si vous souhaitez arrêter) : ");
		fgets(str, LG_CHAINE, stdin);
		strcpy(str2,str);
		if (strcmp("stop\n",str)==0) {
			break;
		}
		ver = verifier(str);
		if (ver==0) {
			printf("\nVous avez utilisé des caractères spéciaux\n\n");
		}
		else {
			printf("\nEntrez la clé que vous souhaitez utiliser : ");
			scanf("%d%*c",&clé);
			res = chiffrer(1,clé,str2);
			écriture(str,clé,res);
			printf("\nLa phrase chiffrée est la suivante : %s",res);
   
			res2 = dechiffrer(1,clé,res);
			printf("\nLa phrase déchiffrée est la suivante : %s\n",res2);
		}
	}
}
