#include <stdio.h>


int main(){
	char names[5][20] = {"my", "name", "is", "mirafra", "technologies"};
	
	char *t = names[3];
	names[3] = names[4];

	return 0;
}
