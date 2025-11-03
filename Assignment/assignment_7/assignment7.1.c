//- input not eorking

#include<stdio.h>
void Pattern(int iNo)
{
    int a=0;
    if(iNo<0)
    {
      iNo==-iNo;
    }
  
    for(a=1;a<=iNo;a++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter NUmber : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}