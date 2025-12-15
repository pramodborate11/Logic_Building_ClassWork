
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt <= iNo ; iCnt = iCnt + 2)
     {
        // if(iCnt % 2==0)
        // {
         printf("%d\t",iCnt);
        // }
        

     }
}
int main()
{
    int iValue = 0;
    printf("Please Enter Frequency :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}