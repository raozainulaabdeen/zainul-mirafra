#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


#define fname 			"/home/zainul/lsp"


int main(){
	int f1;
	char buffer[20] = "Welcome to mirafra H";

	mkfifo(fname, 0777);

	f1 = open(fname, O_WRONLY | O_NONBLOCK);

	write(f1, buffer, sizeof(buffer));




	close(f1);
	return 0;
}
