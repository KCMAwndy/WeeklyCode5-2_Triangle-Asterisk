#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0, i, j;
	printf("Enter number : ");
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			if (i >= j)	printf("*");
			else		printf(" ");
		}
		printf("\n");
	}
	return 0;
}