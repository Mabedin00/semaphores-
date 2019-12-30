all: control.o write.o control.o control_functions.o
	gcc -o control control.o control_functions.o
	gcc -o write write.o control_functions.o

control.o: control.c control_functions.h control_functions.o
	gcc -c control.c

write.o: write.c control_functions.h control_functions.o
	gcc -c write.c

control_functions.o: control_functions.c control_functions.h
	gcc -c control_functions.c

clean:
	rm *o
	rm control
	rm write
	rm story
