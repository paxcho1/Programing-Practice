#include <stdio.h>

//��¥�� ���� ����ü
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

	printf("������ �Է����ּ���:\n");
	while (ask){
		

		printf("�̸�:");
		scanf("%s", People[i].name);
		fflush(stdin);
		printf("�������:");
		scanf("%d %d %d", &People[i].open.year, &People[i].open.month, &People[i].open.day);
		fflush(stdin); 
		printf("����:");
		scanf("%s", People[i].gender);
		fflush(stdin);
		printf("�ּ�:");
		scanf("%s", People[i].address);
		fflush(stdin);
		printf("��ȭ��ȣ:");
		scanf("%s", People[i].PhoneNum);

		i++;
		printf("�� �Է��Ͻðڽ��ϱ�?(��=1,�ƴϿ�=0):");
		fflush(stdin);
		scanf("%d", &ask);

	}
	printf("�̸�\t\t��¥\t\t����\t�ּ�\t\t��ȭ��ȣ\n");
	for (int j = 0; j < i; j++){
		printf("%s\t\t[%d, %d, %d]\t%s\t%s\t%s\n", People[j].name, People[j].open.year, People[j].open.month, People[j].open.day,
			People[j].gender, People[j].address, People[j].PhoneNum);
	}
	return 0;
}

	/*printf("����üũ��: %d\n", sizeof(Me));
	printf("�̸�:%s\n", Me.name);
	printf("��¥:[%d, %d, %d]\n", Me.open.year,Me.open.month,Me.open.day);
	printf("����:%s\n", Me.gender);
	printf("�ּ�:%s\n", Me.address);
	printf("��ȭ��ȣ:%011d\n", Me.PhoneNum);

	printf("=========================================================================\n");

	printf("�̸�\t\t��¥\t\t����\t�ּ�\t\t��ȭ��ȣ\n");
	printf("%s\t\t[%d, %d, %d]\t%s\t%s\t%011d\n", Me.name, Me.open.year, Me.open.month, Me.open.day,
		Me.gender, Me.address, Me.PhoneNum);
	return 0;
*/