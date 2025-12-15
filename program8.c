/*
    Step 1: Understand the problem statement
    Step 2: Write the algoritham
    Step 3: Decide the programming Language
    Step 4: Write the program
    Step 5: Test the program

*/

/*
    Algoritham

    START
         Accept first number as No1 
         Accept Second number as No2
         Perform Addition of No1 And No2
         Dispaly the addition on screen 
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;    //Business Logic 
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f , fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);    // Function call

    printf("Addition is : %f",fRet);

    return 0;
}