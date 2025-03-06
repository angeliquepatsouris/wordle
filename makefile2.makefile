output: WordPool.o CheckWord.o test2.o
	g++ WordPool.o CheckWord.o test2.o -o test2

WordPool.o: WordPool.cpp
	g++ -c WordPool.cpp

CheckWord.o: CheckWord.cpp
	g++ -c CheckWord.cpp

test2.o: test2.cpp
	g++ -c test2.cpp

clean:
	rm *.o output
