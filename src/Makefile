SHELL = /bin/sh

OBJS = main.o algebra.o helloworld.o integers.o strings.o chars.o datatypes.o inputhandle.o loops.o conditional_statements.o input_and_output.o hello_world_tutorial.o integer_example.o integer_infos.o compiling.o pointer.o example_template.o to_do.o menu_template.o vectors.o switch_template.o print_main_menu.o main_menu_2.o


CFLAG = -Wall -g
CC =g++
INCLUDES = 
LIBS = 

cpp-tutorial:${OBJS}
	${CC} ${CFLAG} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

hello_world_example: hello_world_example.o
	${CC} ${CFLAG} -o $@ hello_world_example.o

for_loop_example:
	${CC} ${CFLAG} for_loop_example.cpp -o $@

while_loop_example:
	${CC} ${CFLAG} while_loop_example.cpp -o $@

3D-array_example: 3D-array_example.o
	${CC} ${CFLAG} 3D-array_example.o -o $@

linspace_example: linspace_example.o
	${CC} ${CFLAG} linspace_example.o -o $@

char_example: char_example.o
	${CC} ${CFLAG} char_example.o -o $@

classes_example: classes_example.o
	${CC} ${CFLAG} classes_example.o -o $@

2D-array_example: 2D-array_example.o
	${CC} ${CFLAG} 2D-array_example.o -o $@

1D-array_example: 1D-array_example.o
	${CC} ${CFLAG} 1D-array_example.o -o $@

array_as_argument_example: array_as_argument_example.o
	${CC} ${CFLAG} array_as_argument_example.o -o $@

array_returning_example: array_returning_example.o
	${CC} ${CFLAG} array_returning_example.o -o $@

iomanip_example: iomanip_example.o
	${CC} ${CFLAG} iomanip_example.o -o $@

iostream_example: iostream_example.o
	${CC} ${CFLAG} iostream_example.o -o $@

function_basics_example: function_basics_example.o
	${CC} ${CFLAG} function_basics_example.o -o $@

nested_loop_example:
	${CC} ${CFLAG} nested_loop_example.cpp -o $@

do_while_loop_example:
	${CC} ${CFLAG} do_while_loop_example.cpp -o $@

string_example: inputhandle.o string_example.o
	${CC} ${CFLAG} -o $@ inputhandle.o string_example.o

friend_function_example: friend_function_example.o
	${CC} ${CFLAG} -o $@ friend_function_example.o

overloading_example: overloading_example.o
	${CC} ${CFLAG} -o $@ overloading_example.o

operator_overloading_example: operator_overloading_example.o
	${CC} ${CFLAG} -o $@ operator_overloading_example.o

inheritance_and_derived_classes_example: inheritance_and_derived_classes_example.o
	${CC} ${CFLAG} -o $@ inheritance_and_derived_classes_example.o

static_members_of_classes_example: static_members_of_classes_example.o
	${CC} ${CFLAG} -o $@ static_members_of_classes_example.o

pointers_to_classes_example: pointers_to_classes_example.o
	${CC} ${CFLAG} -o $@ pointers_to_classes_example.o

this_pointers_example: this_pointers_example.o
	${CC} ${CFLAG} -o $@ this_pointers_example.o

copy_constructors_example: copy_constructors_example.o
	${CC} ${CFLAG} -o $@ copy_constructors_example.o

throwing_exception_example: throwing_exception_example.o
	${CC} ${CFLAG} -o $@ throwing_exception_example.o

dynamic_memory_allocation_of_arrays_example: dynamic_memory_allocation_of_arrays_example.o
	${CC} ${CFLAG} -o $@ dynamic_memory_allocation_of_arrays_example.o

new_and_delete_operators_example: new_and_delete_operators_example.o
	${CC} ${CFLAG} -o $@ new_and_delete_operators_example.o

dynamic_memory_example: dynamic_memory_example.o
	${CC} ${CFLAG} -o $@ dynamic_memory_example.o

data_structures_example: data_structures_example.o
	${CC} ${CFLAG} -o $@ data_structures_example.o
 
writing_to_textfile_example: writing_to_textfile_example.o
	${CC} ${CFLAG} -o $@ writing_to_textfile_example.o
 
reading_array_from_file_example: reading_array_from_file_example.o
	${CC} ${CFLAG} -o $@ reading_array_from_file_example.o

vectors_example: inputhandle.o vectors_example.o
	${CC} ${CFLAG} -o $@ inputhandle.o vectors_example.o

break_continue_example: inputhandle.o break_continue_example.o
	${CC} ${CFLAG} -o $@ inputhandle.o break_continue_example.o

file_reading_example: file_reading_example.o
	${CC} ${CFLAG} -o $@ file_reading_example.o

pointer_example: pointer_example.o
	${CC} ${CFLAG} -o $@ pointer_example.o

array_example: array_example.o
	${CC} ${CFLAG} -o $@ array_example.o

#hello_world.o: 
#	${CC} -c hello_world.cpp

#integers.o: integers.cpp algebra.cpp functions.h
#	${CC} -c integers.cpp

backup: 
	-for ii in *.h *.cpp;do cp -v "$$ii" ../backup/"$$ii".bak; done

user-backup: 
	-for ii in *.h *.cpp;do cp -v "$$ii" ../user_backup/"$$ii".bak; done

restore:
	-for ii in ../backup/*.bak; do jj="$${ii%.bak}"; cp "$$ii" ../src/"$${jj#../backup/}"; done
	
user-restore:
	-for ii in ../user_backup/*.bak; do jj="$${ii%.bak}"; cp "$$ii" ../src/"$${jj#../backup/}"; done

all: cpp-tutorial hello_world_example for_loop_example while_loop_example do_while_loop_example nested_loop_example backup

clean:
	-rm -f *.o

.cpp.o:
	${CC} ${CFLAG} ${INCLUDES} -c $<
	
