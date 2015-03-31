Test: main.o
	g++ -g -std=c++11 main.o -o Test
main.o: main.cpp matrixMult.cpp checkMatrix.cpp matrixSize.cpp matrixAdd.cpp reader.cpp
	g++ -g -c -std=c++11 main.cpp
clean:
	rm *.o Test
