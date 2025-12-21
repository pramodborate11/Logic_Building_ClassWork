#include<stdio.h>

void Dislay(int *Arr)
{
    int iCnt = 0; 
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
       printf("%d\n",*(Arr + iCnt));
    }
}

int main()
{
    int Brr[] = {10,20,30,40};
    
    Dislay(Brr);               
    return 0;
}