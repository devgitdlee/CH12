#include <stdio.h>
#include <string.h>


int main(void) {

	char str1[16];
	char str2[16];
	char str3[16];
	char temp[16];

	printf("�� �ܾ� �Է�:");
	scanf("%s%s%s", str1, str2, str3);

	if (strcmp(str1, str2) > 0) {
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);

	}
	if (strcmp(str1, str3) > 0) {
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);

	}
	printf("%s,%s,%s",str1, str2, str3);
	return 0;

}