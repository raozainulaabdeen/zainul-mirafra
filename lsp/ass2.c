#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>


int main(){
	int fd;
	fd = open("ass2.txt", O_RDWR);

	lseek(fd, -7, SEEK_END);
	write(fd, "M", 1);

	close(fd);

	return 0;
}
