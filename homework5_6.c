#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d¹øÂ° Ç× : ", a);
    if (a == 1) printf("1");
    else if (a == 2) printf("1");
    else
    {
        int result;
        int p = 1, pp = 1;
        for (int i = 3; i <= a; i++)
        {
            result = pp + p;
            pp = p;
            p = result;
        }
        printf("%d", result);
    }
}