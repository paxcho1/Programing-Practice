#include <stdio.h>

void IndexSum(int a[], int b[], int c[]);
void PointerSum(int *a, int *b, int *c);
void IndexProd(int a[], int b[], int c[]);
void PointerProd(int *a, int *b, int *c);
void PrintResultMatrix(int a[],int Size);

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
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", Matrix1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix2:\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", Matrix2[i][j]);
		}
		printf("\n");
	}
	//덧셈 결과 출력
	printf("덧셈 결과:\n");
	IndexSum(&Matrix1, 9, &Matrix2, 9);
	printf("IndexSum:\n");

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", ResultMatrix[i][j]);
		}
		printf("\n");
	}

	PointerSum(&Matrix1, 9, &Matrix2, 9);
	printf("PointerSum:\n");
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", ResultMatrix[i][j]);
		}
		printf("\n");
	}
	//곱셈 결과 출력
	printf("곱셈 결과:\n");
	IndexProd(&Matrix1, 9, &Matrix2, 9);
	printf("IndexProd:\n");

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", ResultMatrix[i][j]);
		}
		printf("\n");
	}
	PointerProd(&Matrix1, 9, &Matrix2, 9);
	printf("PointerProd:\n");

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d  ", ResultMatrix[i][j]);
		}
		printf("\n");
	}
}

void IndexSum(int a[], int b[], int c[]){
	
}
void PointerSum(int *a, int *b, int *c);
void IndexProd(int a[], int b[], int c[]);
void PointerProd(int *a, int *b, int *c);

