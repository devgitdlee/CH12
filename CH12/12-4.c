#include <stdio.h>

void my_gets(char *ps) {
	//�ּҰ��� ���ڸ� �ϳ��� ��������
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';

}

int main(void) {

	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	//gets_s(str, sizeof(str));
	//gets(str);
	my_gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	return 0;

}