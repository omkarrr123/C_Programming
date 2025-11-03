#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int a =0;

    for(a=1;a<=5;a++)
    {
        printf("%d\t",a*iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Value: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}