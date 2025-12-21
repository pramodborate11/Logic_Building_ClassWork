#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0; 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]% 2)
        {
             iCnt++;
        }
    }
    return iCount;

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

    iRet = CountEven(ptr,iLenght);

    printf("Addition is %d \n",iRet);

    free(ptr);

    return 0;
}