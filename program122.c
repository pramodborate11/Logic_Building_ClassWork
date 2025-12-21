#include<stdio.h>

void Dislay(int Arr[],int iSize)
{
    int iCnt = 0; 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       printf("%d\n",Arr[iCnt]);
    }
}


int main()
{
    int Brr[] = {10,20,30,40};    //CHANGED
    
    Dislay(Brr,4);               
    return 0;
}