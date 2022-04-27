#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void écriture(char* str, int clé, char* res) {
	FILE* fic;
	fic = fopen("resultat.txt", "a");
	fprintf(fic, "Le message initial est : %s", str);
	fprintf(fic, "La clé est : %d\n", clé);
	fprintf(fic, "Le message chiffré est : %s\n", res);
	fprintf(fic, "___\n\n");
	fclose(fic);
}