#define _CRT_SECURE_NO_WARNINGS          //fopen �Լ� ��ü�� ���װ� ����, �̰ɷ� ���ݵ� ����, ���� �Ƹ��� �ϴ� ������ (iostream �� �� ����), �ٸ��� �Ⱦ��� ���⿡�� ����
#include <iostream>

int main()
{
	FILE* file;          //������ ó�� ���� ������ �д� ����        getc = �ֿܼ��� �б� fgetc = ���Ͽ��� �б�
	char c;
	file = fopen("level1.dat", "r");

	int PositionX = 1;
	int PositionY = 1;

	while ((c = fgetc(file)) != EOF)
	{
		if (c == '*')
		{
			printf("��");
		}
		else if (c == ' ')
		{
			printf("�ٴ�");
		}
		else if (c == 'P')
		{
			printf("�÷��̾�");
		}
		else if (c == 'G')
		{
			printf("��ǥ");
		}
		else if (c == 'M')
		{
			printf("����");
		}

		if (c == '\n')
		{
			++PositionY;
			PositionX = 1;
			printf("�ٹٲ�");
		}
		printf("%c", c);
		++PositionX;
	}


	fclose(file);

	return 0;
}