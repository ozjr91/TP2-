cc:=gcc 
CFLAGS:= -std=c99 -Wall -Wextra -pedantic -ggdb

all:est_trie

est_trie:main.o fonctions.o
	$(CC) $(CFLAGS) -o est_trie main.o fonctions.o


main.o:main.c ../fonctions.h
	$(CC) $(FLAGS) -c main.c


fonctions.o:../fonctions.c ../fonctions.h 
	$(CC) $(FLAGS) -c ../fonctions.c

clean:
	rm -f *.o est_trie

