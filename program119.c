#include<stdio.h>

void Dislay(int Arr[])
{
    int iCnt = 0; 
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
       printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50,60,70};    //CHANGED
    
    Dislay(Brr);               
    return 0;
}