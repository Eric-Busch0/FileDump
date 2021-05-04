
CC = gcc 
main_file = main
input_files = ${main_file}.c
project_name = filedump
output_file = ${project_name}.out
flags = -o
build_dir = build/

default:
	${CC} ${input_files} ${flags} ${build_dir}${output_file}

run:
	${build_dir}${output_file}

make clean:
	del build/filedump.out

make list:
	dir build