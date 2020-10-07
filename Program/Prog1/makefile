OBJS	= main.o project.o
SOURCE	= main.cpp project.cpp
HEADER	= project.h
OUT	= ./a.out
CC = g++
CFLAGS = -g -ggdb -Wall
LFLAGS	 = 

all: a.out

a.out: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

%.o: %.c $(HEADER)
	$(CC) -c -o $@ $< $(LFLAGS)

# clean house
clean:
	rm -f $(OBJS) $(OUT)

# run the program
run: $(OUT)
	$(OUT)

# compile program with debugging information
debug: $(OUT)
	valgrind $(OUT)

# compile program with debugging information and run in gdb
gdb: $(OUT)
	gdb $(OUT)

# run program with valgrind for errors
valgrind: $(OUT)
	valgrind $(OUT)

# run program with valgrind for leak checks
valgrind_leakcheck: $(OUT)
	valgrind --leak-check=full $(OUT)

# run program with valgrind for leak checks (extreme)
valgrind_extreme: $(OUT)
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes $(OUT)
