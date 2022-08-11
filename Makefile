CC = g++
OBJ = main.o func.o
DEPS = header/func.h

CenterPoint: $(OBJ)
	$(CC) -o CenterPoint $(OBJ)
	make test

main.o: 
	$(CC) -c source/main.cpp

func.o: $(DEPS)
	$(CC) -c source/func.cpp

clean: 
	rm -f *.c *.o

clear:
	rm -f  *.exe

test: 
	./CenterPoint.exe -0.1 .2 -1.3 .4