run: all
	./sieve $(args)
	make clean

all: sieve.o test.o
	gcc sieve.o test.o -o sieve -lm

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

test.o: test.c
	gcc -c test.c

clean:
	rm sieve
	rm *.o
