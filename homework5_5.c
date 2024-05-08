#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c, i;
    scanf("%d %d %d", &a, &b, &c);
    if ((c - a) % (a - b) != 0) i = (c - a) / (a - b) + 1;
    else i = (c - a) / (a - b);
    printf("%d", i + 1);
}