output: main.o numberList.o menuMaker.o inputCheck.o
	g++ main.o numberList.o menuMaker.o inputCheck.o -std=c++11 -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

numberList.o: numberList.cpp numberList.hpp
	g++ -std=c++11 -c numberList.cpp

menuMaker.o: menuMaker.cpp menuMaker.hpp
	g++ -std=c++11 -c menuMaker.cpp

inputCheck.o: inputCheck.cpp inputCheck.hpp
	g++ -std=c++11 -c inputCheck.cpp

clean:
	rm *.o output