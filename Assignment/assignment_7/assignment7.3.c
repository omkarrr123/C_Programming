#include<stdio.h>
void Display(int iNo)
{
    int a= 0;
    for(a=-iNo;a<=iNo;a++)
    {
        printf("%d\t",a);
    }
}
int main()
{
    int iValue =0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}