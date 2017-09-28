#include <stdio.h>
#include <string.h>

void PrintPan(int a[20][20]);
//int CheckFive();

int main() {
	int Pan[20][20] = { 0, };
	int location[1] = { 0 ,};
	while (1) {
		PrintPan(Pan);

		printf("흑돌을 놓아주세요.\n");
		scanf("%d", &location[0]);
		scanf("%d", &location[1]);

		Pan[location[0]][location[1]] = -1;

		PrintPan(Pan);

		printf("백돌을 놓아주세요.\n");
		scanf("%d", &location[0]);
		scanf("%d", &location[1]);

		Pan[location[0]][location[1]] = 1;

		PrintPan(Pan);
	}
	return 0;
}
void PrintPan(int a[20][20] ) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (a[i][j] == 0) {
				printf("┼");
				
			}
			else if (a[i][j] == 1) {
				printf("○");
			}
			else if (a[i][j] == -1) {
				printf("●");
			}
			
		}
		printf("\n");
	}
	
}
int CheckFive(int a[20][20]) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (a[i][j]==1) {
				if (a[i - 1][j] == 1 || a[i + 1][j] == 1) {

				}

		}
			else if (a[i][j] == -1) {

			}
	}
	

	}
}
