all: classroom

classroom: classroom.o Student.o
	g++ -std=c++11 classroom.o Student.o -o classroom

classroom.o: classroom.cpp Student.h
	g++ -std=c++11 -c classroom.cpp

Student.o: Student.cpp Student.h
	g++ -std=c++11 -c Student.cpp
