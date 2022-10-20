CC=g++

all: library executable

executable: main.o libcalc.a
	$(CC) main.o libcalc.a -o calc

main.o:
	$(CC) -c main.cpp

library: calculator.o
	ar -rcs libcalc.a calculator.o

calculator.o:
	$(CC) -c calculator.cpp

clean:
	rm -f *.o *.a calc
