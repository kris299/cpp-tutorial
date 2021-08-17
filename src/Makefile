SHELL = /bin/sh

OBJS = main.o algebra.o helloworld.o integers.o strings.o chars.o datatypes.o inputhandle.o loops.o conditional_statements.o input_and_output.o hello_world_tutorial.o integer_example.o integer_infos.o compiling.o pointer.o pointer_example.o example_template.o

CFLAG = -Wall -g
CC =g++
INCLUDE = 
LIBS = 

cpp-tutorial:${OBJS}
	${CC} ${CFLAG} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

hello-world:
	${CC} ${CFLAG} hello_world.cpp -o $@

for_loop_example:
	${CC} ${CFLAG} for_loop_example.cpp -o $@

while_loop_example:
	${CC} ${CFLAG} while_loop_example.cpp -o $@

nested_loop_example:
	${CC} ${CFLAG} nested_loop_example.cpp -o $@

do_while_loop_example:
	${CC} ${CFLAG} do_while_loop_example.cpp -o $@

#hello_world.o: 
#	${CC} -c hello_world.cpp

#integers.o: integers.cpp algebra.cpp functions.h
#	${CC} -c integers.cpp

backup: 
	-for ii in *.h *.cpp;do cp -v "$$ii" ../backup/"$$ii".bak; done

all: cpp-tutorial hello-world for_loop_example while_loop_example do_while_loop_example nested_loop_example backup

clean:
	-rm -f *.o

.cpp.o:
	${CC} ${CFLAG} ${INCLUDES} -c $<
	
