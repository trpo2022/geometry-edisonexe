all:
    gcc -o main -Wall -Werror main.c
test:
	./main
clean:
	rm main.exe main	
