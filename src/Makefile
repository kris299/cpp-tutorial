SHELL = /bin/sh

OBJS = main.o algebra.o helloworld.o integers.o strings.o
CFLAG = -Wall -g
CC =g++
INCLUDE = 
LIBS = 

first1:${OBJS}
	${CC} ${CFLAG} ${INCLUDES} -o $@ ${OBJS} ${LIBS}


#integers.o: integers.cpp algebra.cpp functions.h
#	${CC} -c integers.cpp

clean:
	-rm -f *.o

.cpp.o:
	${CC} ${CFLAG} ${INCLUDES} -c $<
	
