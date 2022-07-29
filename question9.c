#include <stdio.h>
void OctalOfNum(int n)
{
    if (n > 0)
    {
        OctalOfNum(n / 8);
        switch (n % 8)
        {
        case 0:
            printf("0");
            break;
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 5:
            printf("5");
            break;
        case 6:
            printf("6");
            break;
            printf("7");
        default:
            break;
        }
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    printf("\nIn Octal: ");
    OctalOfNum(n);
    return 0;
}