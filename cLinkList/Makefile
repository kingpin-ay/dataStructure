output: main.o clinklist.o node.o
	g++ main.o clinklist.o node.o -o output
	./output

main.o: main.cpp
	g++ -c main.cpp

clinklist.o: clinklist.cpp
	g++ -c clinklist.cpp

node.o: node.cpp
	g++ -c node.cpp

clear:
	rm -rf output
	rm -rf *.o
