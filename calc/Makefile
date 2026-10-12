CC = gcc -g

all: libs main_static main_shared main_dynamic

libs:
	$(MAKE) -C lib

main.o: main.c
	$(CC) -c main.c -I./lib

main_dl.o: main_dl.c
	$(CC) -c main_dl.c

main_static: main.o
	$(CC) -o main_static main.o ./lib/libcalc.a

main_shared: main.o
	$(CC) -o main_shared main.o -L./lib -lcalc

main_dynamic: main_dl.o
	$(CC) -o main_dynamic main_dl.o -ldl

clean:
	$(MAKE) -C lib clean
	rm -f *.o main_static main_shared main_dynamic
