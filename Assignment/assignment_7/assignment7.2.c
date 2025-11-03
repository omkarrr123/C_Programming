#include<stdio.h>
void Display(int iNo)
{
    int a= 0;
    for(a=1;a<=iNo;a++)
    {
        printf("%d\t",a);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}