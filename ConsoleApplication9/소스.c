#include <stdio.h>

char *reverse(char *str1);
char *encryptN(char *str1, int n);
char *rotateN(char *str1);
void print(char *str1, int n);

int main(){

	char Line[101] = { NULL};
	int Count = 0;
	int Rotate = 0;
	int Encrypt = 0;

	printf("입력을 종료하려면 새로운 행에서 (ctrl + z)를 누르십시오.\n");
	
	gets(Line);

	while (Line[Count]){
		Count++;
	}
	printf("입력된 String:");
	print(Line, Count);


	//배열 Reverse
	printf("Reversed:");
	print(reverse(Line), Count);

	//배열 정상화
	reverse(Line);
	

	printf("몇 만큼 Encyrpt?:");
	scanf("%d", &Encrypt);
	printf("\nEncrypt:");
	
	print(encryptN(Line, Encrypt), Count);
/*
	printf("몇 만큼 Rotate?:");
	printf("Rotate:");
	scanf("%d", &Rotate);
	print(rotate(Line, Rotate), Count);
	*/



	
}

void print(char *str1, int n){
	for (int i = 0; i < n; i++){
		printf("%c", str1[i]);
	}
	printf("\n");
}
char *reverse(char *str1){
	char Temp = 0;
	int Count = 0;

	while (str1[Count]){
		Count++;
	}
	for (int i = 0; i <((Count)/2); i++){
		Temp = str1[i];
		str1[i] = str1[(Count-1)-i];
		str1[(Count-1) - i] = Temp;
		
		
	}

	return str1;

}
char *encryptN(char *str1, int n){
	int Count = 0;

	while (str1[Count]){
		Count++;
	}
	for (int i = 0; i < Count-1; i++){
		if (str1[i] >= 65 && str1[i] <= 90){
			
			str1[i] = str1[i]+n;
		}
		else if (str1[i] >= 97 && str1[i] <= 122){
			str1[i] = str1[i + n];
		}

	}
	return str1;
}
