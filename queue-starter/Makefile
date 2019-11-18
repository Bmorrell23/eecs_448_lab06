QueueDemo: main.o Queue.o UnitTest.o
	g++ -g -Wall -std=c++11 main.o Queue.o UnitTest.o -o QueueDemo

main.o: main.cpp UnitTest.h
	g++ -g -std=c++11 -c main.cpp

UnitTest.o: UnitTest.cpp UnitTest.h
	g++ -g -std=c++11 -c UnitTest.cpp

clean:
	rm main.o QueueDemo *~
