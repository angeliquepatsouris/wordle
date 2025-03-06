output: CheckWord.o WordPool.o test4.o
	g++ CheckWord.o WordPool.o test4.o -o test4

CheckWord.o: CheckWord.cpp
	g++ -c CheckWord.cpp

WordPool.o: WordPool.cpp
	g++ -c WordPool.cpp

test4.o: test4.cpp
	g++ -c test4.cpp

clean:
	rm *.o output
