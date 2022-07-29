#include<stdio.h>
void BinaryOfNum(int n)
{
    if(n>0)
    {
       BinaryOfNum(n/2);
       if(n%2==0)
       printf("0");
       else 
       printf("1");
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("\nIn Binary: ");
    BinaryOfNum(n);
    return 0;
}