/*This is the code to demonstrate the write() system call*/

#include <unistd.h>
#include <string.h>

int main(){
	size_t len;
	char buffer[255] = {0};
	int buffer_len = 255;

	strncpy(buffer, "this is the string to display on the screen using write() system call\n", buffer_len);
	int str_len = strlen(buffer);
	len = write(1, buffer, str_len);
}
