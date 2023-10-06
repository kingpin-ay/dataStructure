output: main.o queue.o node.o
	@g++ main.o queue.o node.o -o output
	@./output

main.o: main.cpp
	@g++ -c main.cpp

queue.o: queue.cpp
	@g++ -c queue.cpp

node.o: node.cpp
	@g++ -c node.cpp


clear:
	@rm *.o  output 
