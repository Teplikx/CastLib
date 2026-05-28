CC = gcc

CFLAGS = -Iinclude -Wall -Wextra

LIBS = -lSDL2 -lSDL2_image

SRC = $(wildcard src/Window/*.c) \
      $(wildcard src/Graphics/*.c) \
      $(wildcard src/Core/*.c) \
      $(wildcard src/Audio/*.c) \
      $(wildcard src/Input/*.c) \
      $(wildcard src/Vector2/*.c) \
      $(wildcard src/JSON/*.c)

EXAMPLE = examples/rect.c

OUT = game

all:
	$(CC) $(EXAMPLE) $(SRC) $(CFLAGS) $(LIBS) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)
