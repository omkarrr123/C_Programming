#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    if(iFrequency<0)
    {
        iFrequency == -iFrequency;
    }
    int iNum = 0;
    for(iNum = 1;iNum<=iFrequency;iNum++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    
    return 0;
}