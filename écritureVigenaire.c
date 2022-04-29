#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void écritureVigenaire(char* str, char* clé, char* res, int choix) {
	FILE* fic;
	fic = fopen("resultat.txt", "a");
	if (choix == 1) {
		fprintf(fic, "Le message initial est : %s", str);
		fprintf(fic, "Il est chiffré avec l'algorithme de Vigénaire\n");
		fprintf(fic, "La clé est : %s", clé);
		fprintf(fic, "Le message chiffré est : %s\n", res);
	}
	else if (choix == 2) {
		fprintf(fic, "Le message chiffré est : %s", str);
		fprintf(fic, "Il est chiffré avec l'algorithme de Vigénaire\n");
		fprintf(fic, "La clé est : %s", clé);
		fprintf(fic, "Le message déchiffré est : %s\n", res);
	}
	
	fprintf(fic, "___\n\n");
	fclose(fic);
}