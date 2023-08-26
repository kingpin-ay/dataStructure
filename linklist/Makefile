
output: main.o linklist.o node.o
	@g++ main.o linklist.o node.o -o output
	@./output

main.o: main.cpp
	@g++ -c main.cpp

linklist.o: linklist.cpp
	@g++ -c linklist.cpp

node.o: node.cpp
	@g++ -c node.cpp


clear:
	@rm *.o  output 
