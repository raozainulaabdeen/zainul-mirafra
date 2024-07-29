#include <unistd.h>


int main(){
	char buf[] = "zainulaabdeen\n";
	write(1, buf, 14);
	return 0;
}
