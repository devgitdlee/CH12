#include <stdio.h>


int main(void) {
	int i;
	for (i = 0; i < sizeof("mango"); i++) {
		printf("�ּҰ�: %u\n", *("mango" + i));
	}
	printf("�ּҰ�: %p\n", "mango");
	printf("ù��° ����: %c\n", *"mango");
	printf("�ι�° ����: %c\n", *("mango"+1));
	printf("�¹�° ����: %c\n", "mango"[2]);
	printf("������ ����: %c\n", "mango"[4]);

	return 0;
}