//06.06.(월) 과제#3
//일부 기능만 구현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book //구조체로 구현이 되어 있다.
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
		printf("1. 도서 번호로 책 찾기\n");
		printf("2. 저자 이름으로 책 찾기\n");
		printf("3. 제목으로 책 찾기\n");
		printf("4. 새로운 책 추가\n");
		printf("5. 도서관이 소장한 도서의 수 표시\n");
		printf("6. 종료\n");
		printf("===========================================\n");
		printf("메뉴 중에서 하나를 선택하세요: \n");
		scanf("%d", &select);
		getchar();

		switch (select)
		{
		case 4:
			printf("책 이름 = ");
			gets_s(library[nbooks].name, 30);

			printf("저자 이름 = ");
			gets_s(library[nbooks].author, 30);

			library[nbooks].id = nbooks;
			nbooks++;

			break;

		case 5:
			for (int i = 0; i < nbooks; i++)
			{
				printf("책 이름 = %s", library[i].name);
				printf("저자 = %s", library[i].author);
			}
			printf("\n\n");
			break;

		case 2:
			printf("저자 이름을 입력하세요: ");
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