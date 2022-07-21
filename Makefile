TARGET=add-nbo
all: $(TARGET).o
	gcc -o $(TARGET) $(TARGET).o

$(TARGET).o :
	gcc -c $(TARGET).c

clean:
	rm -f $(TARGET).o
	rm -f $(TARGET)