all: build run

build:
	g++ -I ./include/ -o ./lib/Kisi.o -c ./src/Kisi.cpp
	g++ -I ./include/AVL -o ./lib/AVLNode.o -c ./src/AVL/Node.cpp
	g++ -I ./include/AVL -o ./lib/AVL.o -c ./src/AVL/AVL.cpp
	g++ -I ./include/Stack -o ./lib/STACKNode.o -c ./src/Stack/Node.cpp
	g++ -I ./include/Stack -o ./lib/Stack.o -c ./src/Stack/Stack.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/AVL.o ./lib/AVLNode.o ./lib/Stack.o ./lib/STACKNode.o  ./lib/Kisi.o ./src/Test.cpp

run:
	./bin/Test
