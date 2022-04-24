#include <stdio.h>
#include <string.h>

#include "chiffrer.h"
#include "dechiffrer.h"
#include "convertir.h"
#include "verifier.h"

#define LG_CHAINE 100

void main() {

   char str[] = "ABCD";
   char* res = chiffrer(1,5,str);
   printf("%s",res);
   char str2[] = "abcd";
   char* res2 = chiffrer(1,5,str2);
   printf("\n%s",res2);
}
