#include<stdio.h>
void ReverseNum(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        ReverseNum(n/10);
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("\nReverse of number: ");
    ReverseNum(n);
    return 0;
}