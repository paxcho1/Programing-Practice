#include <stdio.h>

int main(){

	int Num1 = 0, Num2 = 0, Method = 0;

	void TempSwap(int *a, int *b);
	void AddSwap(int *a, int *b);
	void MultSwap(int *a, int *b);
	void EORSwap(int *a, int *b);

	while (1){
		printf("1.Temporary Variable\n2. Addition/Subtraction\n3. Multiply?Division\n4. Exclusive OR\n");

		printf("어떤 방법으로 하시겠습니까?(0은 종료):");
		scanf("%d", &Method);
		

		if (Method==0){
			return 0;
		}
		printf("swap할 숫자를 입력해 주세요:");
		scanf("%d%d", &Num1, &Num2);
		
		switch (Method){

		
		
		case 1:
			
			TempSwap(&Num1, &Num2);
			break;
		case 2:

			AddSwap(&Num1, &Num2);
			break;
		case 3:

			MultSwap(&Num1, &Num2);
			break;
		case 4:

			EORSwap(&Num1, &Num2);
			break;


		}
		printf("Swaped:Num1=%d,Num2=%d\n", Num1, Num2);
	}
}

void TempSwap(int *a, int *b){
	int Temp = 0;
	Temp = *a;
	*a = *b;
	*b = Temp;
}
void AddSwap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void MultSwap(int *a, int *b){
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
	
}
void EORSwap(int *a, int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}