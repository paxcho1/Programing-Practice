#include <stdio.h>

int main(){

	int InputNum1 = 0, InputNum2 = 0, CaseType = 0, Tempory = 0;

	while(1){
		printf("1.Temporary variable");
		printf("\n2.Addition/substraction");
		printf("\n3.Multiply/division");
		printf("\n4.Exclusive OR");
		printf("\n� ������� swap�Ͻðڽ��ϱ�?");
		scanf("%d", &CaseType);

		



		switch (CaseType){
		case 0:
			return 0;

		case 1:
			printf("\n2���� ������ �Է����ֽÿ�:");
			scanf("%d %d", &InputNum1, &InputNum2);
			Tempory = InputNum1;
			InputNum1 = InputNum2;
			InputNum2 = Tempory;
			printf("Num1=%d, Num2=%d\n", InputNum1, InputNum2);
			break;
		case 2:
			printf("\n2���� ������ �Է����ֽÿ�:");
			scanf("%d %d", &InputNum1, &InputNum2);
			InputNum1 = InputNum1 - InputNum2;
			InputNum2 = InputNum1 + InputNum2;
			InputNum1 = -(InputNum1 - InputNum2);
			printf("Num1=%d, Num2=%d\n", InputNum1, InputNum2);
			break;

		case 3:printf("\n2���� ������ �Է����ֽÿ�:");
			scanf("%d %d", &InputNum1, &InputNum2);
			InputNum1 = InputNum1*InputNum2;
			InputNum2 = InputNum1 / InputNum2;
			InputNum1 = InputNum1 / InputNum2;
			printf("Num1=%d, Num2=%d\n", InputNum1, InputNum2);
			break;

		case 4:printf("\n2���� ������ �Է����ֽÿ�:");
			scanf("%d %d", &InputNum1, &InputNum2);
			InputNum1 = InputNum1 ^ InputNum2;
			InputNum2 = InputNum1 ^ InputNum2;
			InputNum1 = InputNum1 ^ InputNum2;
			printf("Num1=%d, Num2=%d\n", InputNum1, InputNum2);
			break;

		default:
			printf("�ٽ� �Է����ֽÿ�\n");

		}
	}
	
	


}