#include <stdio.h>

int main(){
	FILE *fp;
	
	char buffer[255] = {0};
	fp = fopen("f1.txt", "r");
	
	while(fgets(buffer, 255, fp) != NULL){
		printf("%s\n", buffer);
	}

	fclose(fp);

	return 0;
}
