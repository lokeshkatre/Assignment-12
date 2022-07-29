#include <stdio.h>
void NaturalNum(int n)
{
    if (n > 1)
        NaturalNum(n - 1);
    printf("%d ", n);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    NaturalNum(n);
    return 0;
}