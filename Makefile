build:
	g++ main.cpp -o main

run: build
	./main

clean:
	rm -r main
