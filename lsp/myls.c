#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>




int main(){
	struct dirent *de;
	DIR *dr = opendir(".");
	if(dr == NULL){
		perror("opendir");
		return EXIT_FAILURE;
	}

	while((de = readdir(dr)) != NULL){
		printf("%s\n", de->d_name);
	}
	closedir(dr);
	return EXIT_SUCCESS;
}
