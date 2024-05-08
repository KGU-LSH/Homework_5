#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	while (1) {
		int a = rand() % 8 + 2;
		int b = rand() % 8 + 2;
		int x;
		printf("%d X %d = ", a, b);
		scanf("%d", &x);
		if (a * b == x) return;
	}
}