#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	FILE *binFile;
	int Number[80] = { 0, };

	for (int i = 0; i < 80; i++){
		Number[i] = i * 3;
	}
	if ((binFile = fopen("arry", "wb+")) == NULL){
		printf("파일이 열리지 않음");
		exit(1);
	}
	for (int i = 0; i < 80; i++){
		putw(Number[i], binFile);
	}
	rewind(binFile);
	for (int i = 0; i < 80; i++){
		if (i % 3 == 0){
			printf("%d\t", getw(binFile));
		}
		else{
			fseek(binFile, sizeof(int), SEEK_CUR);
		}
	}
	

	return 0;
}