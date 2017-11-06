#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
#include<ctype.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/wait.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>

//#define PORT_NUMBER	49999
#define PORT_NUMBER 49991
#define MAX_COMMAND_SIZE 4096
#define MAX_ACKNOWLEDGE_SIZE 256
