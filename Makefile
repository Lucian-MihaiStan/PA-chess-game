build:
	g++ -g -Wall ./command_classes/*.cpp ./pieces_classes/*.cpp *.cpp -o main

run: build
	./main

clean:
	rm -r main
