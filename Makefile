
CC = gcc 
main_file = main
input_files = ${main_file}.c
project_name = filedump
output_file = ${project_name}.out
flags = -o

default:
	${CC} ${input_files} ${flags} ${output_file}

run:
	${output_file}

make clean:
	del *.out