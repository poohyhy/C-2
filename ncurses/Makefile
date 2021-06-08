CC = gcc
CFLAGS = -W -Wall -I/usr/local/opt/ncurses/include -L/usr/local/opt/ncurses/lib
TARGET = test
OBJECTS = test.o

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ -lmenu -lncurses 

clean :
	rm *.o test