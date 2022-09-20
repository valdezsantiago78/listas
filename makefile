todo: main.o lista.o
	g++ -Wall -o lista-executable main.o lista.o
main.o: main.cpp
	g++ -Wall -c main.cpp
lista.o:
	g++ -Wall -c lista.cpp lista.h
clean:
	rm -rf *.o