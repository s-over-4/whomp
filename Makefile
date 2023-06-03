exec = whomp.out
install_exec = whomp
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g -lSDL2

$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

install:
	make
	cp $(exec) /usr/local/bin/whomp

clean:
	rm -f *.out *.o src/*.o
