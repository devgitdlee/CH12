#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[500];
	char str2[80] = "";
	int str1_length, str2_length, cnt;
	printf("�ܾ� �Է�:");
	gets(str1);
	str1_length = strlen(str1);
	while (1) {
		cnt = 0;
		printf("�˻��� ���ڿ� �Է� (����� end):");
		gets(str2);
		if (strcmp(str2, "end") == 0) break;
		str2_length = strlen(str2);
		int i;

		for (i = 0; i < str1_length; i++) {
			if (strcmp(str2, str1 + i, str2_length) == 0) cnt++;

		}
	

		
		printf("�˻� ���: %d\n", cnt);


	}

	return 0;
}