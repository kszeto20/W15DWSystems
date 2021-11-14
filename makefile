all: main.o read.o read.h
	gcc -o output main.o read.o

main.o: main.c
	gcc -c main.c

read.o: read.c
	gcc -c read.c

clean:
	rm output
	rm *.o

run:
	./output
