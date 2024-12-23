SOURCEDIR = ./src
TBSOURCEDIR = ./tb

SOURCES = $(shell find $(SOURCEDIR) -iname "*.cpp")
TBSOURCES = $(shell find $(TBSOURCEDIR) -iname "*.cpp"	)

all: clean compile run

compile:
	mkdir -p out
	echo $(SOURCES)
	echo $(TBSOURCES)
	g++ $(SOURCES) $(TBSOURCES)  -ggdb  -I ./header/  -o ./out/exec
#	g++ ./tb/tb_main.cpp  -ggdb ./src/*.cpp -I ./header/  -o ./out/exec

run:
	./out/exec	

clean:
	rm -rf ./out/