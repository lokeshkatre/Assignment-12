#include <stdio.h>
void OddNumbers(int n)
{
    if (n > 1)
        OddNumbers(n - 2);
    printf("%d ", n);
}
int main()
{
    int n;
    printf("Enter no. of first n odd numbers:");
    scanf("%d", &n);
    OddNumbers(2 * n - 1);
    return 0;
}