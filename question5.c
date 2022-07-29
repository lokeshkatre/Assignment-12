#include <stdio.h>
void EvenNumbers(int n)
{
    if (n > 2)
        EvenNumbers(n - 2);
    printf("%d ", n);
}
int main()
{
    int n;
    printf("Enter no. of first n even numbers:");
    scanf("%d", &n);
    EvenNumbers(2 * n);
    return 0;
}