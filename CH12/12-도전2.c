#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80];
	char str2[500] = "";
	
	while (1) {
		printf("단어 입력:");
		scanf("%s", str1);

		if (strcmp(str1, "end") == 0) break;
		strcat(str2, str1);
		strcat(str2, " ");
		printf("현재까지의 문자열 : %s\n", str2);
		

	}

	return 0;
}