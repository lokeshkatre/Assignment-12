#include<stdio.h>
void OddNumbers(int n)
{
    printf("%d ", n);
    if (n > 1)
        OddNumbers(n - 2);
}
int main()
{
     int n;
    printf("Enter no. of first n odd numbers:");
    scanf("%d", &n);
    OddNumbers(2 * n - 1);
    return 0;
}