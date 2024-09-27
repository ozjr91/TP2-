cc:= gcc

CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb

all:programme

programme: main.o fonctions.o
	$(CC) $(CFLAGS) -o programme main.o fonctions.o

main.o:main.c fonctions.h
	$(CC) $(CFLAGS) -c main.c


fonctions.o:fonctions.c fonctions.h
	$(CC) $(CFLAGS) -c fonctions.c

clean:
	rm -f *.o programme