CC = g++

CPPFLAGS = -Wall -std=c++11 -pedantic

output: main.o veterinario.o tratador.o funcionario.o menu.o animal.o mamifero.o
	$(CC) main.o veterinario.o tratador.o funcionario.o menu.o animal.o mamifero.o -o index.out
	mv *.o build/

main.o: src/main.cpp
	$(CC) -c src/main.cpp $(CPPFLAGS) src/veterinario.cpp src/tratador.cpp src/funcionario.cpp src/menu.cpp src/animal.cpp src/mamifero.cpp -I include

menu.o: src/menu.cpp
	$(CC) -c src/menu.cpp $(CPPFLAGS) -I include

funcionario.o: src/funcionario.cpp
	$(CC) -c src/funcionario.cpp $(CPPFLAGS) -I include

veterinario.o: src/veterinario.cpp
	$(CC) -c src/veterinario.cpp $(CPPFLAGS) -I include

tratador.o: src/tratador.cpp 
	$(CC) -c src/tratador.cpp $(CPPFLAGS) -I include

animal.o: src/animal.cpp
	$(CC) -c src/animal.cpp $(CPPFLAGS) -I include

mamifero.o: src/mamifero.cpp
	$(CC) -c src/mamifero.cpp $(CPPFLAGS) -I include

clean:
	rm build/*.o