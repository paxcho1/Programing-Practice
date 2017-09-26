#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char *str1);
char *rotateN(char *str1, int n);

int main(int argc, char *argv[]){

	int i = 0;

	printf("실행 명령행 인자(command line arguments) >>\n");

	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++){
		printf("argc[%d]=%s\n", i, argv[i]);

	}
	
	reverse(argv[1]);
	printf("%s\n",argv[1]);
	
	rotateN(argv[2],(*argv[3])-48 );
	printf("%s", argv[2]);

	
	return 0;
	
}
char *reverse(char *str1) {
	char Temp = 0;
	int Count = 0;

	while (str1[Count]) {
		Count++;
	}
	for (int i = 0; i <((Count) / 2); i++) {
		Temp = str1[i];
		str1[i] = str1[(Count - 1) - i];
		str1[(Count - 1) - i] = Temp;


	}

	return str1;

}
char *rotateN(char *str1, int n) {
	int Count = 0;
	while (str1[Count]) {
		Count++;
	}
	
	char Temp = { NULL };
	for (int i = 0; i < n; i++) {
		Temp = str1[Count - 1];
		for (int j = Count - 1; j > 0; j--){

			str1[j] = str1[j - 1];
		}
		str1[0] = Temp;
	}
	return str1;
}