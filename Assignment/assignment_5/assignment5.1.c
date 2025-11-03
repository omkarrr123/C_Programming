#include<stdio.h>
void CheckEvenOdd(int num)
{
    if(num<0)
    {
        num == -num;
    }
    if((num%2)==0)
    {
        printf("the number is Even");
    }
    else
    {
        printf("the number is odd");
    }
}
int main()
{
    int number = 0;
    
    printf("Enter number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}