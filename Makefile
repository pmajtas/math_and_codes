

all: compile run

compile:
	g++ -I ./header/ ./src/tb_main.cpp  -o ./exec

run:
	./exec