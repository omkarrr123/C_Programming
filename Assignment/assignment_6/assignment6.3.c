#include<stdio.h>
#include<stdbool.h>
bool CheckEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    bool bRet = false;

    printf("Pleasr enter two numbers :");
    scanf("%d%d",&iValue1,&iValue2);
    
    bRet = CheckEqual(iValue1,iValue2);

    if(bRet==1)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}