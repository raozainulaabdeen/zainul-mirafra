#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main(){
	pid_t pid;
	printf("Before fork, Parent pid is %d\n", (int)getpid());
	pid = fork();
	if(pid == 0){
		printf("child pid is %d\n", (int)getpid());
		sleep(5);
		printf("child is ending...\n");
		exit(0);
	}
	else{
		printf("Parent pid is %d\n", (int)getpid());
	}

	printf("I am the parent waiting for child to be exited %d\n", (int)getpid());
	wait(NULL);
	printf("Parent Ending\n");
	return 0;
}
