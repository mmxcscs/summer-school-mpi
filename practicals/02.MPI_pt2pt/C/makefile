CC=CC
CFLAGS=-O3
#SUBFIX=_solution

.SUFFIXES: .c

#all: 3.bandwidth$(SUBFIX) 6.bugs_buffer$(SUBFIX)
3: 3.bandwidth$(SUBFIX)
6: 6.bugs_buffer$(SUBFIX)

3.bandwidth$(SUBFIX).o: 3.bandwidth$(SUBFIX).c
	$(CC) $(CFLAGS) -c 3.bandwidth$(SUBFIX).c -o 3.bandwidth$(SUBFIX).o

3.bandwidth$(SUBFIX): 3.bandwidth$(SUBFIX).o
	$(CC) $(CFLAGS) 3.bandwidth$(SUBFIX).o -o 3.bandwidth$(SUBFIX)

6.bubs_buffer$(SUBFIX).o: 6.bubs_buffer$(SUBFIX).c
	$(CC) $(CFLAGS) -c 6.bubs_buffer$(SUBFIX).c -o 6.bubs_buffer$(SUBFIX).o

6.bubs_buffer$(SUBFIX): 6.bubs_buffer$(SUBFIX).o
	$(CC) $(CFLAGS) 6.bubs_buffer$(SUBFIX).o -o 6.bubs_buffer$(SUBFIX)

clean:
	rm -f 3.bandwidth$(SUBFIX)
	rm -f 6.bubs_buffer$(SUBFIX)
	rm -f *.o
