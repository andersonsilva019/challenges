
all: app run

app: main.o stack.o
	gcc obj/main.o obj/stack.o -o bin/exec

main.o: src/main.c
	gcc -c src/main.c -Iinc -o obj/main.o

stack.o: src/stack.c
	gcc -c src/stack.c -Iinc -o obj/stack.o

run: 
	./bin/exec

clean:
	rm obj/*.o bin/exec