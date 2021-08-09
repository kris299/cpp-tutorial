SHELL = /bin/sh

OBJS = main.o algebra.o helloworld.o
CFLAG = -Wall -g
CC =g++
INCLUDE = 
LIBS = 

first1:${OBJS}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

clean:
	-rm -f *.o

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<
	
