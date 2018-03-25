#makefile

CXX = g++


information: main.o university.o building.o person.o student.o instructor.o
	${CXX} -o information main.o university.o building.o person.o student.o instructor.o

main.o: university.cpp university.hpp main.cpp building.cpp building.hpp person.cpp person.hpp student.cpp student.hpp instructor.cpp instructor.hpp
	${CXX} -c main.cpp

university.o: university.hpp university.cpp
	${CXX} -c university.cpp

building.o: building.hpp building.cpp
	${CXX} -c building.cpp

person.o: person.hpp person.cpp
	${CXX} -c person.cpp

student.o: student.hpp student.cpp person.hpp person.cpp
	${CXX} -c student.cpp

instructor.o: instructor.hpp instructor.cpp person.hpp person.cpp
	${CXX} -c instructor.cpp

clean:
	rm *.o information
