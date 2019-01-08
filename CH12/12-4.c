#include <stdio.h>

void my_gets(char *ps) {
	//주소값에 문자를 하나씩 가져오기
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

	printf("공백이 포함된 문자열 입력: ");
	//gets_s(str, sizeof(str));
	//gets(str);
	my_gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;

}