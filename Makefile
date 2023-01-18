
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

valid-palindrome: valid-palindrome.o
	$(CC) $(CFLAGS) -o valid-palindrome valid-palindrome.o

valid-palindrome.o: valid-palindrome.cpp
	$(CC) $(CFLAGS) -c valid-palindrome.cpp

clean:
	rm -rf valid-palindrome valid-palindrome.o
