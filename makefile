todo: main.o lista.o helper.o matriz.o
	g++ -Wall -o lista-executable main.o lista.o helper.o matriz.o
main.o: main.cpp
	g++ -Wall -c main.cpp
lista.o:
	g++ -Wall -c lista.cpp lista.h
helper.o:
	g++ -Wall -c helper.cpp helper.h
matriz.o:
	g++ -Wall -c matriz.cpp matriz.h
clean:
	rm -rf *.o