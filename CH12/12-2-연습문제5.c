#include <stdio.h>
#include <string.h>


int main(void) {
	char str1[16], str2[16];
	char str3[11] = "***********";
	int length;

	while(1){

		printf("단어 입력");
		scanf("%s", str1);
		length = strlen(str1);
		if (length == 0) break;
		if (length > 5) {
			strncpy(str2, str1, 5);
			strncat(str2, str3, length - 5);
		}
		else strcpy(str2, str1);

		printf("입력한 단어 : %s, 생략한 단어 : %s", str1, str2);
	}
	
	return 0;


}