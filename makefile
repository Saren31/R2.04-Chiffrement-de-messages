 #Recompile toute l'application (Aucune règle de dépendence)
all:
	gcc -o main main.c verifier.c convertir.c chiffrer.c dechiffrer.c écriture.c

#Fait l'édition de liens si .o plus récents que main
main: main.o verifier.o convertir.o chiffrer.o dechiffrer.o écriture.o
	gcc -o main main.o verifier.o convertir.o chiffrer.o dechiffrer.o écriture.o

#Recompile si main.c ou les .h plus récents que main.o
main.o: main.c verifier.h convertir.h chiffrer.h dechiffrer.h écriture.h
	gcc -c main.c

#Recompile si verifier.c ou verifier.h plus récents que verifier.o
verifier.o: verifier.c verifier.h
	gcc -c verifier.c

#Recompile si convertir.c ou convertir.h plus récents que convertir.o
convertir.o: convertir.c convertir.h
	gcc -c convertir.c

#Recompile si chiffrer.c ou chiffrer.h plus récents que chiffrer.o
chiffrer.o: chiffrer.c chiffrer.h
	gcc -c chiffrer.c

#Recompile si dechiffrer.c ou dechiffrer.h plus récents que dechiffrer.o
dechiffrer.o: dechiffrer.c dechiffrer.h
	gcc -c dechiffrer.c
	
#Recompile si écritureCesar.c ou écritureCesar.h plus récents que écritureCesar.o
écritureCesar.o: écritureCesar.c écritureCesar.h
	gcc -c écritureCesar.c

#Recompile si écritureVigenaire.c ou écritureVigenaire.h plus récents que écritureVigenaire.o
écritureVigenaire.o: écritureVigenaire.c écritureVigenaire.h
	gcc -c écritureVigenaire.c
	
#Efface les objets et l'exécutable	
clean:
	rm main.o verifier.o convertir.o chiffrer.o dechiffrer.o
	rm main
	
test:
	gcc -o main main.c chiffrerCesar.c dechiffrerCesar.c chiffrerVigenaire.c dechiffrerVigenaire.c verifier.c écritureCesar.c écritureVigenaire.c convertir.c

	
