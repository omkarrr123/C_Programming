#include<stdio.h>
float Percentage(float a,float b)
{
    float fMarks=0.0;
    if(b==0)
    {
        printf("Not available");
    }
   
    
    fMarks = ((b/a)*100);

    return fMarks;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("PLease enter total marks ");
    scanf("%d",&iValue1);

    printf("PLease enter obtained marks ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("the percentage is %f",fRet);

}