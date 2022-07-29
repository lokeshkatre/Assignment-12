#include <stdio.h>
void NaturalNum(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        NaturalNum(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    NaturalNum(n);
    return 0;
}