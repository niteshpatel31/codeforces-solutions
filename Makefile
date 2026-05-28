bin:=main
file:=test
lib:=-lfmt
run: build

build:
	@g++ $(file).cpp -g -Wall -Werror -o $(bin) -std=c++23 $(lib)&& ./$(bin) <input > output

clean:
	rm -rf $(file).o $(bin)

.PHONY: run build clean
