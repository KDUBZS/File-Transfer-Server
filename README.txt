NAME: Kienen Wayrynen

EMAIL: kienen.wayrynen@wsu.edu

DESCRIPTION:
The miniature ftp system consists of two programs (executables),
mftpserve and mftp, the server and client respectively.

Both programs will be written in C, to execute in the school’s Linux OS
environment (CentOS 6).

The programs will utilize the Unix TCP/IP sockets interface (library) to
communicate with each other across a TCP/IP network. Only IPv4
addressing will be supported by these programs.

FILES IN ARCHIVE:
- mftp.c
- mftp.h
- mftpserve.c
- makefile
- README.txt

HOW TO RUN:
1. Use “make” to create executables for mftp.c and mftpserve.c
2. On one terminal “./mftpserve” to run the server
3. On another terminal “./mftp” to execute the client.
4. Using various commands you can move and transfer files and move directories.
ex: rls: remote directory
    ls: client directory
    rcd: change remote directory
    cd: change client directory