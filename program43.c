//inpute : 12 3  : true
#include<stdio.h>
 
int main()
{
     int iValue1 = 0;
     int iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second  number : ");
    scanf("%d",&iValue2);
    
    if((iValue1 % iValue2) == 0)
    {
        printf("it is completaly division");
    }
    else
    {
        printf("In is not divisible");
    }
    return 0;
}