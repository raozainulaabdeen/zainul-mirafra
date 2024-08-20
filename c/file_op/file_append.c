#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("f1.txt", "a");
	fprintf(fp, "\nI am appending this line!");
	fclose(fp);
	return 0;
}
