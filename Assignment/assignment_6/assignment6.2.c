#include<stdio.h>
#include<stdbool.h>
bool CheckGreater(int iNum)
{
    if(iNum>101)
  {
    return true;
  }
  else{
    return false;
  }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number :");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet ==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
}