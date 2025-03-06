output: WordPool.o Player.o Person.o Computer.o CheckWord.o PlayerMemory.o Game.o  main.o
	g++ WordPool.o Player.o Person.o Computer.o CheckWord.o PlayerMemory.o Game.o main.o -o output

WordPool.o: WordPool.cpp
	g++ -c WordPool.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

Person.o: Person.cpp
	g++ -c Person.cpp

Computer.o: Computer.cpp
		g++ -c Computer.cpp

CheckWord.o: CheckWord.cpp
	g++ -c CheckWord.cpp

PlayerMemory.o: PlayerMemory.cpp
	g++ -c PlayerMemory.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o output
