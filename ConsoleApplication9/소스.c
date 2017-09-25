#include <stdio.h>

char *reverse(char *str1);
char *encryptN(char *str1, int n);
char *rotateN(char *str1, int n);
void printString(char *str1, int n);

int main(){
	
	char Line[101] = { NULL };
	int Count = 0;
	int Rotate = 0;
	int Encrypt = 0;

	printf("문자열을 입력해 주십시오.\n");

	gets(Line);

	while (Line[Count]){
		Count++;
	}
	printf("입력된 String:");
	printString(Line, Count);


	//배열 Reverse
	printf("Reversed:");
	printString(reverse(Line), Count);

	//배열 정상화
	reverse(Line);

	//배열 Encrypt
	printf("몇 만큼 Encyrpt?:");
	scanf("%d", &Encrypt);
	printf("Encrypt:");

	printString(encryptN(Line, Encrypt), Count);

	//배열 정상화
	encryptN(Line, -Encrypt);
	
	printf("몇 만큼 Rotate?:");
	printf("Rotate:");
	scanf("%d", &Rotate);
	printString(rotate(Line, Rotate), Count);
	
	
	return 0;
}

void printString(char *str1, int n){
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
	for (int i = 0; i <((Count) / 2); i++){
		Temp = str1[i];
		str1[i] = str1[(Count - 1) - i];
		str1[(Count - 1) - i] = Temp;


	}

	return str1;

}
char *encryptN(char *str1, int n){
	int Count = 0;

	while (str1[Count]){
		Count++;

	}
	if (n > 26 || n<-26){
		n = n % 26;
	}
	
	
	
	for (int i = 0; i < Count; i++){
		if (str1[i] >= 65 && str1[i] <= 90){

			str1[i] = str1[i] + n;

			if (str1[i]>90){
				str1[i] = str1[i] - 26;
			}
			else if (str1[i]<65){
				str1[i] = str1[i] + 26;
			}
		}
		else if (str1[i] >= 97 && str1[i] <= 122){
			str1[i] = str1[i] + n;
			if (str1[i] > 122){
				str1[i] = str1[i] - 26;
			}
			else if (str1[i] < 97){
				str1[i] = str1[i] + 26;
			}
		}

	}
	return str1;
}
char *rotateN(char *str1, int n){
	int Count = 0;
	while (str1[Count]){
		Count++;
	}
	n = n%Count;
	for (int i = 0; i < Count; i++){
		str1[i] = str1[i + n];
		if (i + n>Count){
			str1[i] = str1[i + n - Count];
		}
	}
	return str1;
}
