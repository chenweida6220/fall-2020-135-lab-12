main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: doctest.h funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f a.out main main.o tests tests.o funcs.o
