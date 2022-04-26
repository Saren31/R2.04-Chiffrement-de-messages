#include <stdio.h>
#include <string.h>

#include "chiffrer.h"
#include "dechiffrer.h"
#include "convertir.h"
#include "verifier.h"
#include <string.h>

#define LG_CHAINE 100

void main() {
	//Il faut faire un make test pour utiliser le programme (sous linux)
	char str[LG_CHAINE];
	int clé;
	int res;
	
	while (strcmp("stop\n",str)!=0) {
		printf("Entrez la phrase que vous souhaitez chiffrer (ou stop si vous souhaitez arrêter) : ");
		fgets(str, LG_CHAINE, stdin);
		if (strcmp("stop\n",str)==0) {
			break;
		}
		res = verifier(str);
		if (res==0) {
			printf("\nVous avez utilisé des caractères spéciaux\n\n");
		}
		else {
			printf("\nEntrez la clé que vous souhaitez utiliser : ");
			scanf("%d%*c",&clé);
			char* res = chiffrer(1,clé,str);
			printf("\nLa phrase chiffrée est la suivante : %s",res);
   
			char* res2 = dechiffrer(1,clé,res);
			printf("\nLa phrase déchiffrée est la suivante : %s\n",res2);
		}
	}
}
