main: main.o stackForQueue.o
	g++ -o $@ $^
.cpp.o:
	g++ -c $<
clean: 
	rm -rf *.o main
