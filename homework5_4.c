#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j <= a - i) printf(" ");
            if (j > a - i) printf("* ");
        }
        printf("\n");
    }
}