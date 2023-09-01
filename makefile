# Common object files
COMMON_OBJS = Bus.o Car.o Motorbike.o Vehicle.o

# Target for Question 1
main-1-1: $(COMMON_OBJS) main-1-1.o
	g++ -std=c++11 $(COMMON_OBJS) main-1-1.o -o main-1-1

# Target for Question 2
main-1-2: $(COMMON_OBJS) ParkingLot.o main-1-2.o
	g++ -std=c++11 $(COMMON_OBJS) ParkingLot.o main-1-2.o -o main-1-2

#Target for Question 3
main-1-3: $(COMMON_OBJS) ParkingLot.o main-1-3.o
	g++ -std=c++11 $(COMMON_OBJS) ParkingLot.o main-1-3.o -o main-1-3

# Object files
Bus.o: Bus.cpp Bus.h
	g++ -std=c++11 -c Bus.cpp

Car.o: Car.cpp Car.h
	g++ -std=c++11 -c Car.cpp

Motorbike.o: Motorbike.cpp Motorbike.h
	g++ -std=c++11 -c Motorbike.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -std=c++11 -c Vehicle.cpp

ParkingLot.o: ParkingLot.cpp ParkingLot.h
	g++ -std=c++11 -c ParkingLot.cpp

main-1-1.o: main-1-1.cpp
	g++ -std=c++11 -c main-1-1.cpp

main-1-2.o: main-1-2.cpp
	g++ -std=c++11 -c main-1-2.cpp

main-1-3.o: main-1-3.cpp
	g++ -std=c++11 -c main-1-3.cpp

# Clean target
clean:
	rm -f *.o main-1-1 main-1-2
