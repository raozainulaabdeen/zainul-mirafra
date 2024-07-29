#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>


int main(){
	int fd;
	char write_buff[200];
	strcpy(write_buff, "Welcome to the Mirafra Family!");
	char buff[200] = {0};
	fd = open("my_file.txt", O_RDONLY | O_WRONLY | O_CREAT, 0777);
	if(fd == -1){
		printf("file open failed - errno is %d\n", errno);
		perror("ERROR");
	}
	else{
		printf("file is opened successfully, fd is %d\n", fd);
	}

	size_t nwb = write(fd, write_buff, strlen(write_buff));
	printf("number of bytes read are %ld\n", nwb);

	size_t nb = read(fd, buff, 200);
	buff[nb] = '\0';

	printf("Number of bytes read is %ld and the data is %s\n", nb, buff);

	return 0;
}
