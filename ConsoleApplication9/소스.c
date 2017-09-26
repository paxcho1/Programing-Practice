#include <stdio.h>

char *reverse(char *str1);
char *encryptN(char *str1, int n);
char *rotateN(char *str1, int n);
void printString(char *str1, int n);

int main() {

	char Line[101] = { NULL };
	int Count = 0;
	int Rotate = 0;
	int Encrypt = 0;

	printf("문자열을 입력해 주십시오.\n");
	
	//문자열 입력받기
	gets(Line);

	//문자열의 문자 갯수 
	while (Line[Count]) {
		Count++;
	}
	//입력된 문자열 출력
	printf("입력된 String:");
	printString(Line, Count);


	//문자열 Reverse
	printf("Reversed:");
	printString(reverse(Line), Count);

	//문자열 정상화
	reverse(Line);

	//문자열 Encrypt
	printf("몇 만큼 Encyrpt?:");
	scanf("%d", &Encrypt);
	printf("Encrypt:");

	printString(encryptN(Line, Encrypt), Count);

	//문자열 정상화
	encryptN(Line, -Encrypt);
	//입력 버퍼 지우기
	fflush(stdin);

	//문자열 Rotate
	printf("몇 만큼 Rotate?:");
	
	scanf("%d", &Rotate);

	printf("Rotate:");
	printString(rotateN(Line, Rotate), Count);


	return 0;
}

void printString(char *str1, int n) {
	for (int i = 0; i < n; i++) {
		printf("%c", str1[i]);
	}
	printf("\n");
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
char *encryptN(char *str1, int n) {
	int Count = 0;

	while (str1[Count]) {
		Count++;

	}
	if (n > 26 || n<-26) {
		n = n % 26;
	}



	for (int i = 0; i < Count; i++) {
		if (str1[i] >= 65 && str1[i] <= 90) {

			str1[i] = str1[i] + n;

			if (str1[i]>90) {
				str1[i] = str1[i] - 26;
			}
			else if (str1[i]<65) {
				str1[i] = str1[i] + 26;
			}
		}
		else if (str1[i] >= 97 && str1[i] <= 122) {
			str1[i] = str1[i] + n;
			if (str1[i] > 122) {
				str1[i] = str1[i] - 26;
			}
			else if (str1[i] < 97) {
				str1[i] = str1[i] + 26;
			}
		}

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
		Temp = str1[Count-1];
		for (int j = Count-1; j > 0; j--){
			
			str1[j] = str1[j-1];
		}
		str1[0] = Temp;
	}
	return str1;
}
