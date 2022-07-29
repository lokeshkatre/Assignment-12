#include <stdio.h>
void SquareOfNatural(int n)
{
    if (n > 1)
        SquareOfNatural(n - 1);
    printf("%d ", n*n);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    SquareOfNatural(n);
    return 0;
}