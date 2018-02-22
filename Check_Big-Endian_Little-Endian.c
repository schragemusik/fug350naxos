/*
●Check Big-Endian Little-Endian
*/
#include <stdio.h>
int main(void)
{
	int x = 1;
	union {
		int i;
		char c[sizeof(int)];
	} y;
	y.i = 1;
	printf("Method-1 (pointer) : ");
	if (*(char *)&x == 1) {
		printf("little-endian\n");
	} else {
		printf("big-endian\n");
	}
	fflush(stdout);
	printf("Method-2 (union)   : ");
	if (y.c[0] == 1) {
		printf("little-endian\n");
	} else {
		printf("big-endian\n");
	}
	fflush(stdout);
	return 0;
}
