

all: compile run

compile:
	g++ ./src/tb_main.cpp -o ./exec

run:
	./exec