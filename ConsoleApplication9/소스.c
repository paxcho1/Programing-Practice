#include <stdio.h>

char *reverse(char *str1);
char *encryptN(char *str1,int n);
char *rotateN(char *str1);
void print(char *str1, int n);

int main(){

	char Line[100] = '0w';
	int Count = 0;
	int Rotate = 0;
	int Encrypt = 0;

	printf("입력을 종료하려면 새로운 행에서 (ctrl + z)를 누르십시오.\n");

	while (gets(Line[Count])){
		Count++;
	}
	printf("입력된 String:");
	print(Line, Count);

	

	printf("Reversed:");
	print(reverse(Line), Count);
	
	
	printf("몇 만큼 Encyrpt?:");
	printf("Encrypt:");
	scanf("%d", &Encrypt);
	print(encryptN(Line, Encrypt), Count);

	printf("몇 만큼 Rotate?:");
	printf("Rotate:");
	scanf("%d", &Rotate);
	print(rotate(Line, Rotate), Count);

	



}

void print(char *str1, int n){
	for (int i = 0; i < n; i++){
		printf("%c", str1[i]);
	}
	printf("\n");
}
char *reverse(char *str1){
	

	
}