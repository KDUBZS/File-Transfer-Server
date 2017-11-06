CFLAGS=-g -std=gnu99 -pedantic -Wall

both: mftpserve mftp

mftpserve: mftpserve.o
	gcc $(CFLAGS) mftpserve.c -o mftpserve

mftp: mftp.o
	gcc $(CFLAGS) mftp.c -o mftp

clean:
	rm -f mftpserve mftp
	rm -f mftpserve.o mftp.o
	rm -f mftpserve.exe.stackdump mftp.exe.stackdump
	rm -r -f mftpserve.dSYM mftp.dSYM
