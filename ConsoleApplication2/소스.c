#include <stdio.h>

int main(){

	int InputNum = 1;

	while (1){
		
		//진수 전환을 위한 변수 설정
		int j = 0;
		int Num8 = 0, Num16 = 0;
		
		//숫자를 입력받음
		printf("숫자를 입력해주시오:");
		scanf("%d", &InputNum);
		if (InputNum==0){
			return 0;
		}
		
		//숫자를 이진수로 변환
		printf("\t\t");
		for (int i = 31; i >= 0; i--){
			printf("%d", 1 & (InputNum >> i));
		}
		printf("\n\t\t");
		
		//숫자를 8진수로 변환
		for (int i = 0, Digit = 1; i <= 10; i++){
			Num8 += (7 & (InputNum >> 3 * i))*Digit;
			Digit *= 10;
		}
		printf("%32d\t", Num8);
		
		//%o를 이용해 8진수 출력
		printf("%10o", InputNum);
		printf("\n\t\t                        ");
		
		//숫자를 16진수로 변환
		for (int i = 7; Num16 == 0; i--){
			Num16 = 15 & (InputNum >> 4 * i);
			j += 1;
			
		}
		for (int i = 0; i<j-1; i++){
			printf(" ");
		}

		for (int i = 7 - j + 1; i >= 0; i--){
			Num16 = 15 & (InputNum >> 4 * i);
			if (Num16 > 9){
				printf("%c", Num16 + 87);
			}
			else{
				printf("%d", Num16);
			}
		}

		//%x를 이용해 16진수 출력
		printf(" \t%10x", InputNum);
		printf("\n");

	}
	

}