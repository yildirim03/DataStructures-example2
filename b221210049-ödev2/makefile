all: derle bagla calistir
derle:
	g++ -c -I "./include" ./src/BinaryTree.cpp -o ./lib/BinaryTree.o
	g++ -c -I "./include" ./src/LinkedList.cpp -o ./lib/LinkedList.o
	g++ -c -I "./include" ./src/LinkedListNode.cpp -o ./lib/LinkedListNode.o
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
bagla:
	g++ ./lib/main.o ./lib/BinaryTree.o ./lib/LinkedList.o ./lib/LinkedListNode.o ./lib/Node.o -o ./bin/program
calistir:
	./bin/program