output: WordPool.o test1.o
	g++ WordPool.o test1.o -o test1

WordPool.o: WordPool.cpp
	g++ -c WordPool.cpp

test1.o: test1.cpp
	g++ -c test1.cpp

clean:
	rm *.o output
