#include<stdio.h>
#include<stdlib.h>

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
   int iLenght = 0, iCnt = 0;
   int *ptr = NULL;

   printf("Enter Number of Elements :\n");
   scanf("%d",&iLenght);  

   ptr = (int *)malloc(iLenght * sizeof(int));
   if(ptr == NULL)
   {
      printf("Unamble to alocate Memory");
      return -1;
   }

   printf("Enter the Elements :\n");
    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Dislay(ptr,iLenght);

    free(ptr);

    return 0;
}