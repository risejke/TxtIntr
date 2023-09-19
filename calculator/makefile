# Простой make-file без переменных, для релиза и дебага

.PHONY: all debug release clean

all: debug release

debug: calculator-dbg

calculator-dbg: main.cpp
	g++ -g -O0 main.cpp -o calculator-dbg -Wall

release: main

main: main.cpp
	g++ -O2 main.cpp -o main -DNDEBUG -Wall

clean:
	rm -f main calculator-dbg
