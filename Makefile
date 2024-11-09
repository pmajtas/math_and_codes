

all: compile run

compile:
	mkdir -p out
	g++ -I ./header/  ./tb/tb_main.cpp  -o ./out/exec

run:
	./out/exec	

clean:
	rm -rf ./out/