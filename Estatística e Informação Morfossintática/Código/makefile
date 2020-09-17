all:main

main: main.o functions.o
	gcc -g -o main main.o functions.o
main.o: main.c functions.h structs.h
	gcc -g -o main.o main.c -c -W -Wall -ansi -pedantic
functions.o: functions.c functions.h structs.h
	gcc -g -o functions.o functions.c -c -W -Wall -ansi -pedantic
clean:
	del /Q /S *.o *~ main
run:
	mingw32-make clean
	mingw32-make all
	.\main