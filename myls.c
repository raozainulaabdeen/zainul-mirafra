#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>

int main(){
	struct dirent *de;
	DIR *dr = opendir(".");

	if(dr == NULL){
		perror("opendir:");
	}
	else{
		while((de = readdir(dr)) != NULL){
			printf("%s ", de->d_name);
		}
	}
	printf("\n");
	return 0;
}
