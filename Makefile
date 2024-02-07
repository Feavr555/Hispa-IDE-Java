CC		= gcc
SRC1		= proyecto.c -o
SRC2		= package.c -o
BIN1		= bin32/proyecto.exe
BIN2		= bin32/package.exe

programa:
	$(CC) $(SRC1) $(BIN1)
	$(CC) $(SRC2) $(BIN2)
