#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int a;
	while (1) {
		printf("자연수 : ");
		scanf("%d", &a);
		if (a == 0) break;
		int count = 0;
		for (int i = 1; i < a; i++) 
		{
			if (a % i == 0) count += i;
		}
		if (count > a) printf("과잉수\n");
		else if (count < a) printf("부족수\n");
		else printf("완전수\n");
	}
}