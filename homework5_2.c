#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b;
    int count = 0;
    scanf("%d", &a);
    printf("\n¡Ÿ\n----\n");
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b != i) count++;
    }
    printf("\n%d∏Ì", count);
}