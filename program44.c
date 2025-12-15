//inpute : 12 3  : true
#include<stdio.h>
 #include<stdbool.h>

 bool CheckDivisioble(int iNo1 ,int iNo2)
 {

    if((iNo1 % iNo2) == 0)
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
    
     int iValue1 = 0;
     int iValue2 = 0;
     bool bRet = false;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second  number : ");
    scanf("%d",&iValue2);
    
    bRet = CheckDivisioble(iValue1,iValue2);

    if(bRet == true)
    {
        printf("It is completely divisible");
    }
    else
    {
       printf("It is not completely divisible");
    }
    return 0;
}