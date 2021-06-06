Matrix: Matrix.o main.o
	g++ -o Matrix main.o Matrix.o
	rm *.o

main.o: main.cpp
	g++ -c main.cpp

Matrix.o: Matrix.cpp
	g++ -c Matrix.cpp

clean:
	rm Matrix
