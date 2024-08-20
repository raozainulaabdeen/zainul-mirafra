#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("f1.txt", "w");
	fprintf(fp ,"I am writing to the file Mirafra Technologies!");
	fclose(fp);
	return 0;
}
