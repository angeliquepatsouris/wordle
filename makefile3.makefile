output: Player.o Person.o Computer.o WordPool.o test3.o
	g++ Player.o Person.o Computer.o WordPool.o test3.o -o test3

Player.o: Player.cpp
	g++ -c Player.cpp

Person.o: Person.cpp
	g++ -c Person.cpp

Computer.o: Computer.cpp
		g++ -c Computer.cpp

WordPool.o: WordPool.cpp
		g++ -c WordPool.cpp

test3.o: test3.cpp
	g++ -c test3.cpp

clean:
	rm *.o output
