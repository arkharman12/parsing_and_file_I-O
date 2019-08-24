
#makefile

#code compiler to use for compilation
CC=g++
#flags to use for compilation
CFLAGS= -g -Wall -Wextra -Wpedantic
IO:
	$(CC) $(CFLAGS) main.cpp
	touch output.txt
clean:
	rm *.out
	rm output.txt
run: a.out
	./a.out
