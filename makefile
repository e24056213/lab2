test: main.o rating.o 
	g++ -o test main.o rating.o 

rating.o: rating.cpp rating.h
	g++ -c rating.cpp

main.o: main.cpp rating.h
	g++ -c main.cpp 

clean:
	rm test *.o

