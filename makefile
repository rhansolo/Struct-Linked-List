all:structlink.o test.o
	gcc structlink.o test.o
structlink.o: 
	gcc -c structlink.c structlink.h
test.o:
	gcc -c test.c structlink.c structlink.h
run:
	./a.out
