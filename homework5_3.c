#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int a;
	while (1) {
		printf("�ڿ��� : ");
		scanf("%d", &a);
		if (a == 0) break;
		int count = 0;
		for (int i = 1; i < a; i++) 
		{
			if (a % i == 0) count += i;
		}
		if (count > a) printf("���׼�\n");
		else if (count < a) printf("������\n");
		else printf("������\n");
	}
}