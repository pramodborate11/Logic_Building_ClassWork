#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0; 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       iSum = iSum + Arr[iCnt];
    }
    return iSum;

}


int main()
{
   int iLenght = 0, iCnt = 0,iRet = 0;
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

    iRet = Summation(ptr,iLenght);

    printf("Addition is %d \n",iRet);

    free(ptr);

    return 0;
}