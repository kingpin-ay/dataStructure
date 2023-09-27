output: main.o stack.o node.o
	@g++ main.o stack.o node.o -o output
	@./output

main.o: main.cpp
	@g++ -c main.cpp

stack.o: stack.cpp
	@g++ -c stack.cpp

node.o: node.cpp
	@g++ -c node.cpp


clear:
	@rm *.o  output 
