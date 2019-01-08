#include <stdio.h>

int main(void) {

	char str[80] = "apple juice";
	char *ps = "banana";

	puts(str);
	fputs(str, stdout);
	puts(ps);
	fputs(ps, stdout);
	puts("milk");
	fputs("milk", stdout);

	return 0;


}