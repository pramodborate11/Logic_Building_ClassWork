////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////
#include<stdio.h>                                     // For input output
#include<stdbool.h>                                   // For bool datatype

////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Description   : It use to check even odd
//  Input         : Integer
//  Output        : Boolean
//  Author        : Pramod Khandu Borate
//  date          : 10/10/2025
//
////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
   int iRem = 0;
   
   iRem = iNo % 2;

   if(iRem == 0)
   {  return true;  }
   else
   {  return false; }
}

////////////////////////////////////////////////////////
//
//Entry pont function of Application
//
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);
     
    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }

    return 0;
}

////////////////////////////////////////////////////////
//
//  testing case 
//
////////////////////////////////////////////////////////