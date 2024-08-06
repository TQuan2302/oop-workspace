# format of a makefile section:
# <name_of_section>: <files_needed>
#	(<- tab here) <command here>

#to use: type "make" <name_of_section> in terminal
# in this case: type "make sum"
sum: sum_positive.cpp main.cpp
	g++ main.cpp sum_positive.cpp -o sum_positive

# make can include multiple commands. This make command compiles and run the executable at the same time.
sum_run: sum_positive.cpp main.cpp
	g++ main.cpp sum_positive.cpp -o sum_positive
	./sum_positive

# make can also run bash commands (and even git!)
# this make section forcefully removes all executables made. 
clear:
	rm -f 1-1 1-2 sum_positive

# finally: makefile is really useful for practicals.
# you can pre-write commands for all the function-x-x and main-x-x, and run them by using make!
1-1: function-1-1.cpp main-1-1.cpp
	g++ function-1-1.cpp main-1-1.cpp -o 1-1
	./1-1

# to stop make from printing the commands run, write '@' in front of that command
# try running 'make 1-2' and compare it with 'make 1-1'.
1-2: function-1-2.cpp main-1-2.cpp
	@g++ function-1-2.cpp main-1-2.cpp -o 1-2
	@./1-2

# you can use make commands as part of a make command (see how 'clear' is a make command?)
run-all:
	make 1-1
	make 1-2



# further instructions - ignore for now
book.o: book.h book.cpp
	g++ book.cpp -o book.o

library.o: library.h library.cpp
	g++ library.cpp -o library.o

total:
	g++ book.o library.o main.cpp