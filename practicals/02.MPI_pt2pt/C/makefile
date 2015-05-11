CC=CC
CFLAGS=-O3
#SUBFIX=_solution

.SUFFIXES: .c
#all: 1 2 3 4 5 6

1: 1.simple_send_recv$(SUBFIX)
2: 2.ping_pong$(SUBFIX)
3: 3.bandwidth$(SUBFIX)
4: 4.sum_ring$(SUBFIX)
5: 5.exchange_ghost_cells$(SUBFIX)
6: 6.bugs_buffer$(SUBFIX)

1.simple_send_recv$(SUBFIX).o: 1.simple_send_recv$(SUBFIX).c
	$(CC) $(CFLAGS) -c 1.simple_send_recv$(SUBFIX).c -o 1.simple_send_recv$(SUBFIX).o

1.simple_send_recv$(SUBFIX): 1.simple_send_recv$(SUBFIX).o
	$(CC) $(CFLAGS) 1.simple_send_recv$(SUBFIX).o -o 1.simple_send_recv$(SUBFIX)

2.ping_pong$(SUBFIX).o: 2.ping_pong$(SUBFIX).c
	$(CC) $(CFLAGS) -c 2.ping_pong$(SUBFIX).c -o 2.ping_pong$(SUBFIX).o

2.ping_pong$(SUBFIX): 2.ping_pong$(SUBFIX).o
	$(CC) $(CFLAGS) 2.ping_pong$(SUBFIX).o -o 2.ping_pong$(SUBFIX)

3.bandwidth$(SUBFIX).o: 3.bandwidth$(SUBFIX).c
	$(CC) $(CFLAGS) -c 3.bandwidth$(SUBFIX).c -o 3.bandwidth$(SUBFIX).o

3.bandwidth$(SUBFIX): 3.bandwidth$(SUBFIX).o
	$(CC) $(CFLAGS) 3.bandwidth$(SUBFIX).o -o 3.bandwidth$(SUBFIX)

4.sum_ring$(SUBFIX).o: 4.sum_ring$(SUBFIX).c
	$(CC) $(CFLAGS) -c 4.sum_ring$(SUBFIX).c -o 4.sum_ring$(SUBFIX).o

4.sum_ring$(SUBFIX): 4.sum_ring$(SUBFIX).o
	$(CC) $(CFLAGS) 4.sum_ring$(SUBFIX).o -o 4.sum_ring$(SUBFIX)

5.exchange_ghost_cells$(SUBFIX).o: 5.exchange_ghost_cells$(SUBFIX).c
	$(CC) $(CFLAGS) -c 5.exchange_ghost_cells$(SUBFIX).c -o 5.exchange_ghost_cells$(SUBFIX).o

5.exchange_ghost_cells$(SUBFIX): 5.exchange_ghost_cells$(SUBFIX).o
	$(CC) $(CFLAGS) 5.exchange_ghost_cells$(SUBFIX).o -o 5.exchange_ghost_cells$(SUBFIX)

6.bubs_buffer$(SUBFIX).o: 6.bubs_buffer$(SUBFIX).c
	$(CC) $(CFLAGS) -c 6.bubs_buffer$(SUBFIX).c -o 6.bubs_buffer$(SUBFIX).o

6.bubs_buffer$(SUBFIX): 6.bubs_buffer$(SUBFIX).o
	$(CC) $(CFLAGS) 6.bubs_buffer$(SUBFIX).o -o 6.bubs_buffer$(SUBFIX)

clean:
	rm -f *.o
	rm -f 1.simple_send_recv$(SUBFIX)
	rm -f 2.ping_pong$(SUBFIX)
	rm -f 3.bandwidth$(SUBFIX)
	rm -f 4.sum_ring$(SUBFIX)
	rm -f 5.exchange_ghost_cells$(SUBFIX)
	rm -f 6.bugs_buffer$(SUBFIX)

