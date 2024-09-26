# Définir le compilateur
CC := gcc

# Options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb

# Cible par défaut : compilation de l'exécutable
all : executable

# Cible pour créer l'exécutable
executable : fonctions.o main.o
	$(CC) $(CFLAGS) -o executable fonctions.o main.o

# Règle pour compiler le fichier fonctions.o
fonctions.o : fonctions.c fonction.h
	$(CC) $(CFLAGS) -c fonctions.c

# Règle pour compiler le fichier main.o
main.o : main.c fonction.h
	$(CC) $(CFLAGS) -c main.c

# Nettoyage des fichiers objets et de l'exécutable
clean :
	rm -f *.o executable

