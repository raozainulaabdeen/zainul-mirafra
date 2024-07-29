#include <stdio.h>

const int cgu;
const int cgi = 1;
static int su;
static int si = 2;
const static int csgu;
const static int csgi = 3;
int main(){
	char str[] = "zainulaabdeen";
	const int clu;
	const int cli = 4;
	const static int cslu;
	const static int csli = 5;
	int *ptr = &clu;
       	*ptr = 1;	
	return 0;
}
