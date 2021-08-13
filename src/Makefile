SHELL = /bin/sh

OBJS = main.o algebra.o helloworld.o integers.o strings.o chars.o datatypes.o inputhandle.o loops.o conditional_statements.o input_and_output.o hello_world_tutorial.o integers_example.o

CFLAG = -Wall -g
CC =g++
INCLUDE = 
LIBS = 

cpp-tutorial:${OBJS}
	${CC} ${CFLAG} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

hello-world:
	${CC} ${CFLAG} hello_world.cpp -o $@

#hello_world.o: 
#	${CC} -c hello_world.cpp

#integers.o: integers.cpp algebra.cpp functions.h
#	${CC} -c integers.cpp

backup: 
	-for ii in *.h *.cpp;do cp -v "$$ii" ../backup/"$$ii".bak; done

all: cpp-tutorial hello-world backup

clean:
	-rm -f *.o

.cpp.o:
	${CC} ${CFLAG} ${INCLUDES} -c $<
	
