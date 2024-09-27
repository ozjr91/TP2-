cc:=gcc
CFLAGS:= -std=c99 -Wall -Wextra -pedantic -ggdb

all:trie

trie:main.o 
	$(CC) $($CFLAGS) -o trie main.o 

main.o:main.c 
	$(CC) $(CFLAGS) -c main.c

fonctions.o: fonctions.h fonction.c
	$(CC) $(CFLAGS) -c fonctions.c

clean: 
		rm -f *.o trie