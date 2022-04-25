#include <stdio.h>
#include <string.h>

#include "chiffrer.h"
#include "dechiffrer.h"
#include "convertir.h"
#include "verifier.h"

#define LG_CHAINE 100

void main() {

   char str[] = "Je m'appelle Lucas Veslin et je fais tous le travail pour l'instant !";
   char* res = chiffrer(1,5,str);
   printf("%s",res);
   
   char* res2 = dechiffrer(1,5,res);
   printf("\n%s",res2);
}
