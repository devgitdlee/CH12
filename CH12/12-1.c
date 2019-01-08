#include <stdio.h>


int main(void) {
	int i;
	for (i = 0; i < sizeof("mango"); i++) {
		printf("주소값: %u\n", *("mango" + i));
	}
	printf("주소값: %p\n", "mango");
	printf("첫번째 문자: %c\n", *"mango");
	printf("두번째 문자: %c\n", *("mango"+1));
	printf("셋번째 문자: %c\n", "mango"[2]);
	printf("마지막 문자: %c\n", "mango"[4]);

	return 0;
}