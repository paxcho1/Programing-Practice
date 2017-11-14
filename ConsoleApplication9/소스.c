#include <stdio.h>
#include <stdlib.h>

int main(void){

	int *pointer = NULL;
	int n = 128;
	int count1 = 0, count2 = 0,sum=0;
	
	while (1){
		count1++;
		if (pointer = (int *)malloc(sizeof(char)*n)){
			count2++;
		}
		else if(n!=0){
			printf("%dbyte이%d만큼 반복\n",n, count2);
			sum += n*count2;
			count2 = 0;
			n = n / 2;
			
		}
		else{
			break;
		}
	}
	printf("\n%dbyte", sum);
	return 0;
}