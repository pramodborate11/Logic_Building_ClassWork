#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Minimum(int Arr[],int iSize)
{
   int iCnt = 0 ,iMin=0;    


   for(iMin = Arr[0],iCnt = 0;iCnt < iSize;iCnt++)
   {
    if(Arr [iCnt]<iMin)
    {
        iMin =Arr[iCnt];
    }
   }
   return iMin;
}

int main()
{
    int iLenght = 0 ,iCnt = 0,iRet =0;
    IPTR iPtr = NULL;

    printf("Enter the number of Elements :\n");
    scanf("%d",&iLenght);

    //STEP 1 : ALLOACTE THE MEOMORY
    iPtr = (IPTR)malloc(iLenght * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unamble to allocate Meomory \n");
        return -1;
    }

    printf("Enter the Values :\n");

    for(iCnt = 0 ;iCnt < iLenght ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

   
   
    //STEP 2 USE THE MEMORY
    iRet = Minimum(iPtr,iLenght);
    printf("Minimum number is %d\n",iRet);
    
    //STEP 3 free the memory
    free(iPtr);

    return 0;
}