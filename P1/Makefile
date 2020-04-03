# Matheus Barcellos de Castro Cunha   		NUSP: 11208238

FLAGS = -pthread -Wall -pedantic -g -std=c99 -D _POSIX_C_SOURCE=199309L
OBJS = graf.o
EXEC = graf

.PHONY: clean

all: graf

graf: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c %.h
	$(CC) $(FLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f *.o *~ graf

run: 
	./$(EXEC)