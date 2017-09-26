#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){

	int i = 0;

	printf("(command line arguments) >>\n");

	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++){
		printf("argc[%d]=%s\n", i, argv[i]);
	}


		if (strcmp(argv[1],"add")==0){
			int Sum = 0;
			Sum = atoi(argv[2]) + atoi(argv[3]);
			printf("%d", Sum);
		}
		else if (strcmp(argv[1], "Sub") == 0){
			int Sum = 0;
			Sum = atoi(argv[2]) - atoi(argv[3]);
		}
		else if (strcmp(argv[1], "mul") == 0){
			printf("%d", atoi(argv[2]) * atoi(argv[3]));
		}
		else if (strcmp(argv[1], "div") == 0){
			printf("%d", atof(argv[2]) / atof(argv[3]));
		}
		else if (strcmp(argv[1], "quot") == 0){
			printf("%d", atoi(argv[2]) / atoi(argv[3]));
		}
		else if (strcmp(argv[1], "remain") == 0){
			printf("%d", atoi(argv[2]) % atoi(argv[3]));
		}
		else if (strcmp(argv[1], "abs") == 0){
			printf("%d", abs(atoi(argv[2])));
		}
		else if (strcmp(argv[1], "rev") == 0){
			printf("%d", -1*atoi(argv[2]));
		}
		return 0;
	}