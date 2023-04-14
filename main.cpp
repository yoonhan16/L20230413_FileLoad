#define _CRT_SECURE_NO_WARNINGS          //fopen 함수 자체에 버그가 있음, 이걸로 공격도 가능, 뜻은 아몰랑 일단 쓰고볼랭 (iostream 에 들어가 있음), 다른데 안쓰고 여기에만 존재
#include <iostream>

int main()
{
	FILE* file;          //파일의 처음 시작 지점을 읽는 문장        getc = 콘솔에서 읽기 fgetc = 파일에서 읽기
	char c;
	file = fopen("level1.dat", "r");

	int PositionX = 1;
	int PositionY = 1;

	while ((c = fgetc(file)) != EOF)
	{
		if (c == '*')
		{
			printf("벽");
		}
		else if (c == ' ')
		{
			printf("바닥");
		}
		else if (c == 'P')
		{
			printf("플레이어");
		}
		else if (c == 'G')
		{
			printf("목표");
		}
		else if (c == 'M')
		{
			printf("몬스터");
		}

		if (c == '\n')
		{
			++PositionY;
			PositionX = 1;
			printf("줄바꿈");
		}
		printf("%c", c);
		++PositionX;
	}


	fclose(file);

	return 0;
}