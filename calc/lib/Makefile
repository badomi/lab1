CC = gcc -g
OBJS = add.o subtract.o multiply.o divide.o

all: libcalc.a libcalc.so

libcalc.a: $(OBJS)
	ar rcs libcalc.a $(OBJS)

libcalc.so: $(OBJS)
	$(CC) -shared -o libcalc.so $(OBJS)

%.o: %.c
	$(CC) -fPIC -c $<

clean:
	rm -f *.o libcalc.a libcalc.so
