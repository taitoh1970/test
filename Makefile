CC     = gcc
CFLAGS = -O2
LIBS   = -lm
TARGET = test_c_sqrt
SRC    = test_c_sqrt.c
OBJ    = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LIBS)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	-rm -f $(OBJ) $(TARGET) *~
