build:
	g++ -g -Wall -Wextra main.cpp Piece.cpp Board.cpp Piece.cpp -o main

run: build
	./main

clean:
	rm -r main
