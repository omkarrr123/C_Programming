#include<stdio.h>
void OddDisplay(int iNo)
{
    int a=0;
    for(a=1;a<=iNo;a++)
    {
        if((a%2)!=0)
        {
            printf("%d\n",a);
        }
    }

}
int main()
{
    int iValue = 0;
 
    printf("enter number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;


}