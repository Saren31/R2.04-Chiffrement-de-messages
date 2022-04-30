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
*  Nom du fichier :  convertir.c								              *
*                                                                             *
******************************************************************************/



#define LG_CHAINE 100
#include<stdio.h>
#include <string.h>
#include<iconv.h>


char* convertir(char phrase[LG_CHAINE+1]) {
	//ça ne fonctionne pas
	iconv_t cd = iconv_open("ASCII//TRANSLIT","UTF-8");
	size_t inleft = strlen(phrase);
	size_t outleft = BUFSIZ;
	int rc;
	char* inptr = phrase;
	unsigned char    outbuf[20];
	char* outptr = (char*)outbuf;
	
	rc = iconv(cd,&inptr, &inleft,&outptr,&outleft);
	printf("%s",outptr);
	return outptr;
}
