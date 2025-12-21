#include<stdio.h>
#include<stdlib.h>

float Avarage(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0; 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum=iSum +Arr[iCnt];
    }
    return ((float) iSum/ (float)iSize);   

}


int main()
{
   int iLenght = 0, iCnt = 0;
   float fRet = 0.0f;
   int *ptr = NULL;

   printf("Enter Number of Elements :\n");
   scanf("%d",&iLenght);  

   ptr = (int *)malloc(iLenght * sizeof(int));
   if(NULL == ptr) //INDUSTRIAL WAY OF CODING
   {
      printf("Unamble to alocate Memory");
      return -1;
   }

   printf("Enter the Elements :\n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Avarage(ptr,iLenght);

    printf("Avarage  is %f \n",fRet);

    free(ptr);

    return 0;
}