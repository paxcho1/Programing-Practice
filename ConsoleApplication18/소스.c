#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){

	int *pointer = NULL;
	int n = 0;
	double sum = 0, doubsum = 0, average = 0, dis = 0;


	printf("입력할 자료의 수:");
	scanf("%d", &n);

	pointer = (int *)malloc(sizeof(int)*n);

	printf("입력자료:");
	for (int i = 0; i < n; i++){
		scanf("%d", (pointer + i));
		sum += *(pointer + i);
	}
	average = sum / n;
	for (int i = 0; i < n; i++){
		doubsum += pow(((*(pointer + i) - average)), 2);
	}
	

	printf("합:%.5f\t평균:%.5f\t표준편차:%.5f", sum, average, sqrt((doubsum / n - 1)));

	return 0;
}