/*
   START
         Accept number and store no 
         divide no by 2
         if the reaminder is 0 
            then display even
         otherwise 
            display as odd
   STOP
*/
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
   int iRem = 0;
   
   iRem = iNo % 2;

   if(iRem == 0)
   {
    printf("It is Even Number \n");
   }
   else
   {
    printf("It is odd Number \n");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);
     
    CheckEvenOdd(iValue);

    

    return 0;
}