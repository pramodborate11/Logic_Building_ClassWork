
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt <= iNo ; iCnt+= 2)
     {
        
         printf("%d\t",iCnt);
        
     }
}

// time complecity : O(N/2)
int main()
{
    int iValue = 0;
    printf("Please Enter Frequency :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}