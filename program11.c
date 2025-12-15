/*
    Algoritham

    START
         Accept first number as No1 
         Accept Second number as No2
         if the input is negative then convert it into positive 
         Perform Addition of No1 And No2
         Dispaly the addition on screen 
    STOP
*/

/////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Discription   : It is use to Addition 
//  Input         : Float,Float
//  Output        : Float
//  Author        : Pramod Khandu Borate
//  Date          : 09/10/2025
//
/////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,             // First input
                            float fNo2              // Second input
                        )
{
    float fSum = 0.0f;                              // to Store the result

    if(fNo1<0.0f)                                   // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)                                   // Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                             //Business Logic 6
    return fSum;
}  // End of AdditionTwoNumbers

/////////////////////////////////////////////////////
//
//Entry point function for the application
//
/////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;           // To accept user input
    float fRet = 0.0f;                              // To store the result

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);     // Method call

    printf("Addition is : %f",fRet);

    return 0;
}  // End of main

/////////////////////////////////////////////////////
//
//  Testcases successfully handle by the application
//
//  Input1 : 10.5     Input2 : 3.2         Output : 13.7
//  Input1 : -10.5    Input2 : 3.2         Output : 13.7
//  Input1 : 10.5     Input2 : -3.2        Output : 13.7
//  Input1 : -10.5    Input2 : -3.2        Output : 13.7
//  Input1 : 10.5     Input2 : 0.0         Output : 13.7
//
/////////////////////////////////////////////////////