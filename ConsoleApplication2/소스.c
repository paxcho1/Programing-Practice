#include <stdio.h>

int main(){

	int InputNum = 1;

	while (1){
		
		//���� ��ȯ�� ���� ���� ����
		int j = 0;
		int Num8 = 0, Num16 = 0;
		
		//���ڸ� �Է¹���
		printf("���ڸ� �Է����ֽÿ�:");
		scanf("%d", &InputNum);
		if (InputNum==0){
			return 0;
		}
		
		//���ڸ� �������� ��ȯ
		printf("\t\t");
		for (int i = 31; i >= 0; i--){
			printf("%d", 1 & (InputNum >> i));
		}
		printf("\n\t\t");
		
		//���ڸ� 8������ ��ȯ
		for (int i = 0, Digit = 1; i <= 10; i++){
			Num8 += (7 & (InputNum >> 3 * i))*Digit;
			Digit *= 10;
		}
		printf("%32d\t", Num8);
		
		//%o�� �̿��� 8���� ���
		printf("%10o", InputNum);
		printf("\n\t\t                        ");
		
		//���ڸ� 16������ ��ȯ
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

		//%x�� �̿��� 16���� ���
		printf(" \t%10x", InputNum);
		printf("\n");

	}
	

}