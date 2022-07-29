#include <stdio.h>
void EvenNumbers(int n)
{
    printf("%d ", n);
    if (n > 2)
        EvenNumbers(n - 2);
}
int main()
{
    int n;
    printf("Enter no. of first n even numbers in reverse:");
    scanf("%d", &n);
    EvenNumbers(2 * n);
    return 0;
}