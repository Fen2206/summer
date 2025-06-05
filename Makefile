CC=gcc
CFLAGS=-Wall -O0

all: bench_iaxpy.out

bench_iaxpy.o: bench_iaxpy.c
	${CC} ${CFLAGS} -c $^ -o $@
iaxpy.o: iaxpy.c
	${CC} ${CFLAGS} -c $^ -o $@
bench_iaxpy.out: bench_iaxpy.o iaxpy.o
	${CC} ${CFLAGS} -o $@ $^

bench_sscal.o: bench_sscal.c
	${CC} ${CFLAGS} -c $^ -o $@

sscal.o: sscal.c
	${CC} ${CFLAGS} -c $^ -o $@

bench_sscal.out: bench_sscal.o sscal.o
	${CC} ${CFLAGS} -o $@ $^
	
clean:
	rm -f *.o *.out