//06.06.(��) ����#3
//�Ϻ� ��ɸ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book //����ü�� ������ �Ǿ� �ִ�.
{
	int id;
	char name[30];
	char author[30];
};
struct book library[1000];

int main()
{
	char name[30], author[30];
	int select = 0;
	int nbooks = 0;

	while (select != 6)
	{
		int select;

		printf("===========================================\n");
		printf("1. ���� ��ȣ�� å ã��\n");
		printf("2. ���� �̸����� å ã��\n");
		printf("3. �������� å ã��\n");
		printf("4. ���ο� å �߰�\n");
		printf("5. �������� ������ ������ �� ǥ��\n");
		printf("6. ����\n");
		printf("===========================================\n");
		printf("�޴� �߿��� �ϳ��� �����ϼ���: \n");
		scanf("%d", &select);
		getchar();

		switch (select)
		{
		case 4:
			printf("å �̸� = ");
			gets_s(library[nbooks].name, 30);

			printf("���� �̸� = ");
			gets_s(library[nbooks].author, 30);

			library[nbooks].id = nbooks;
			nbooks++;

			break;

		case 5:
			for (int i = 0; i < nbooks; i++)
			{
				printf("å �̸� = %s", library[i].name);
				printf("���� = %s", library[i].author);
			}
			printf("\n\n");
			break;

		case 2:
			printf("���� �̸��� �Է��ϼ���: ");
			scanf_s("%s", author);

			for (int i = 0; i < nbooks; i++)
			{
				if (strcmp(author, library[i].author) == 0)
					printf("%s %s \n\n", library[i].name, library[i].author);
			}

		case 6:
			exit(0);

		}
	}
	return 0;
}