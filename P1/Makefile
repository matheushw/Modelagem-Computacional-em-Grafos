# Matheus Barcellos de Castro Cunha   		NUSP: 11208238

FLAGS = -pthread -Wall -pedantic -g -std=c99 -D _POSIX_C_SOURCE=199309L
OBJS = Estrutura.o Grafo.o
EXEC = Grafo

.PHONY: clean

all: Grafo

Grafo: $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c %.h
	$(CC) $(FLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f *.o *~ Grafo

run: 
	./$(EXEC)