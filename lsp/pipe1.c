#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main(){
	int fd[2] = {0};
	int p_r = pipe(fd);
	printf("r=%d, fd[0]=%d, fd[1]=%d\n", p_r, fd[0], fd[1]);
	
	pid_t pid = fork();

	if(pid > 0){
		close(fd[0]);
		write(fd[1], "Welcome to Mirafra", strlen("Welcome to Mirafra"));
		//for(int i = 0; i < 100000; i++);
		close(fd[1]);
	}

	else if(pid == 0){
		char ptr[18];
		close(fd[1]);
		read(fd[0], ptr, 18);
		printf("%s\n", ptr);
	}

	else{
		printf("fork error: %d\n", pid);
	}

	return 0;
}
