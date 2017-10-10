#include <stdio.h>

//날짜를 위한 구조체
struct date{
	int year;
	int month;
	int day;
};

struct Personalinfo{
	char name[20];
	struct date open;
	char gender[5];
	char address[30];
	char PhoneNum[11];
};
typedef struct Personalinfo Personalinfo;

int main(){


	Personalinfo People[10];
	int ask = 1;
	int i = 0;

	printf("정보를 입력해주세요:\n");
	while (ask){
		

		printf("이름:");
		scanf("%s", People[i].name);
		fflush(stdin);
		printf("생년월일:");
		scanf("%d %d %d", &People[i].open.year, &People[i].open.month, &People[i].open.day);
		fflush(stdin); 
		printf("성별:");
		scanf("%s", People[i].gender);
		fflush(stdin);
		printf("주소:");
		scanf("%s", People[i].address);
		fflush(stdin);
		printf("전화번호:");
		scanf("%s", People[i].PhoneNum);

		i++;
		printf("더 입력하시겠습니까?(예=1,아니오=0):");
		fflush(stdin);
		scanf("%d", &ask);

	}
	printf("이름\t\t날짜\t\t성별\t주소\t\t전화번호\n");
	for (int j = 0; j < i; j++){
		printf("%s\t\t[%d, %d, %d]\t%s\t%s\t%s\n", People[j].name, People[j].open.year, People[j].open.month, People[j].open.day,
			People[j].gender, People[j].address, People[j].PhoneNum);
	}
	return 0;
}

	/*printf("구조체크기: %d\n", sizeof(Me));
	printf("이름:%s\n", Me.name);
	printf("날짜:[%d, %d, %d]\n", Me.open.year,Me.open.month,Me.open.day);
	printf("성별:%s\n", Me.gender);
	printf("주소:%s\n", Me.address);
	printf("전화번호:%011d\n", Me.PhoneNum);

	printf("=========================================================================\n");

	printf("이름\t\t날짜\t\t성별\t주소\t\t전화번호\n");
	printf("%s\t\t[%d, %d, %d]\t%s\t%s\t%011d\n", Me.name, Me.open.year, Me.open.month, Me.open.day,
		Me.gender, Me.address, Me.PhoneNum);
	return 0;
*/