build:
	g++ -g -Wall *.cpp -o main

run: build
	./main

clean:
	rm -r main
