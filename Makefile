

all: compile run

compile:
	mkdir out
	g++ -I ./header/  ./src/*.cpp ./tb/tb_main.cpp  -o ./out/exec

run:
	./out/exec	

clean:
	rm -rf ./out/