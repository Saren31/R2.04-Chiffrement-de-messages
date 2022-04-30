#define LG_CHAINE 100
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int verifierClé(int clé) {
	if (clé<=26 && clé>=-26) {
		return 1;
	}
	else {
		return 0;
	}
}