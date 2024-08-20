#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

int main(){
	int fd = open("f1.txt", O_RDWR);
	if(fd < 0){
		printf("File Not Found Error!\n");
		perror("ERROR: ");
	}

	else{
		printf("File opened successfully!\n");
	}
	return 0;
}
