#include <stdio.h>

int main(){

	char line[101];
	char *arrypointer=line;
	int count = 0;

	printf("�Է��� �����Ϸ��� ���ο� �࿡�� (ctrl + z)�� �����ʽÿ�.\n");
	while (gets(line)){
		while (line[count]){
			count++;
		}
		printf("Foward Print:");
		for (int i = 0; i < count; i++){
			printf("%c", *(arrypointer+i));
		}
		printf("\nBackward Print:");
		for (int i = count; i>=0; i--){
			printf("%c", *(arrypointer + i));
		}
		printf("\n");
		
			line[0] = '\0';
		
	}
	

	


	return 0;
}