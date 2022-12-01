CC = gcc
FLAGS = -Wall -g
AR = ar


all: connections 


connections: main.o libmy_mat.a
	$(CC) $(FLAGS) -o connections main.o libmy_mat.a

main.o: main.c libmy_mat.a
	$(CC) $(FLAGS) -c main.c

libmy_mat.a: my_mat.o
	$(AR) -rcs libmy_mat.a my_mat.o 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 

.PHONY: all clean

clean:
	rm -f *.o *.a connections 



