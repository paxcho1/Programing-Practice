#include <stdio.h>

void IndexSum(int a[], int b[], int c[]);
void PointerSum(int *a, int *b, int *c);
void IndexProd(int a[3][3], int b[3][3], int c[3][3]);
void PointerProd(int a[3][3], int b[3][3], int c[3][3]);
void PrintResultMatrix(int a[3][3]);

int main(){

	int Matrix1[3][3] = { 0, };
	int Matrix2[3][3] = { 0, };
	int ResultMatrix[3][3] = { 0, };

	//1행열 입력
	printf("첫번째 행열을 입력해주세요:");

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &Matrix1[i][j]);
		}
	}
	//2행열 입력
	printf("두번째 행열을 입력해주세요:");

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &Matrix2[i][j]);
		}
	}
	//입력된 행열 출력
	printf("입력된 행열:\n");

	printf("Matrix1:\n");
	PrintResultMatrix(&Matrix1);

	printf("Matrix2:\n");
	PrintResultMatrix(&Matrix2);

	//덧셈 결과 출력
	printf("덧셈 결과:\n");
	IndexSum(&Matrix1, &Matrix2, &ResultMatrix);
	
	printf("IndexSum:\n");
	PrintResultMatrix(&ResultMatrix);


	PointerSum(&Matrix1, &Matrix2, &ResultMatrix);
	
	printf("PointerSum:\n");
	PrintResultMatrix(&ResultMatrix);
	//곱셈 결과 출력
	

	printf("곱셈 결과:\n");
	
	IndexProd(&Matrix1, &Matrix2, &ResultMatrix);
	
	printf("IndexProd:\n");
	PrintResultMatrix(&ResultMatrix);

	PointerProd(&Matrix1, &Matrix2, &ResultMatrix);
	
	printf("PointerProd:\n");
	PrintResultMatrix(&ResultMatrix);

	return 0;
}

void IndexSum(int a[], int b[], int c[]){
	for (int i = 0; i < 9; i++){
		c[i] = a[i] + b[i];
	}

}
void PointerSum(int *a, int *b, int *c){
	for (int i = 0; i < 9; i++){
		*(c + i) = *(a + i) + *(b + i);
	}
}
void IndexProd(int a[3][3], int b[3][3], int c[3][3] ){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			c[i][j] = 0;
			for (int k = 0; k < 3; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
void PointerProd(int a[3][3], int b[3][3], int c[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			*(*(c+i)+j) = 0;
			for (int k = 0; k < 3; k++){
				*(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
			}
		}
	}
}
void PrintResultMatrix(int a[3][3]){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%5d  ", a[i][j]);
		}
		printf("\n");
	}

}

