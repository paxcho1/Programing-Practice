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

	printf("�Է��� �����Ϸ��� ���ο� �࿡�� (ctrl + z)�� �����ʽÿ�.\n");

	while (gets(Line[Count])){
		Count++;
	}
	printf("�Էµ� String:");
	print(Line, Count);

	

	printf("Reversed:");
	print(reverse(Line), Count);
	
	
	printf("�� ��ŭ Encyrpt?:");
	printf("Encrypt:");
	scanf("%d", &Encrypt);
	print(encryptN(Line, Encrypt), Count);

	printf("�� ��ŭ Rotate?:");
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