 #Recompile toute l'application (Aucune règle de dépendence)
all:
	gcc -o main main.c verifier.c convertir.c chiffrer.c dechiffrer.c

#Fait l'édition de liens si .o plus récents que main
main: main.o verifier.o convertir.o chiffrer.o dechiffrer.o
	gcc -o main main.o verifier.o convertir.o chiffrer.o dechiffrer.o

#Recompile si main.c ou les .h plus récents que main.o
main.o: main.c verifier.h convertir.h chiffrer.h dechiffrer.h
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

#Efface les objets et l'exécutable	
clean:
	rm main.o verifier.o convertir.o chiffrer.o dechiffrer.o
	rm main
	
test:
	gcc -o main main.c chiffrer.c dechiffrer.c verifier.c

	
