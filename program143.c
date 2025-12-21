#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < O(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
   int iCnt = 0;
   bool bFlag = false;

   for(iCnt = 0;iCnt < iSize; iCnt++)
   {
    if(Arr[iCnt] == iNo )
    {
        bFlag = true;
        break;
    }
   
   }
   return bFlag; 
}

int main()
{
    int iLenght = 0 ,iCnt = 0, iValue = 0;
    bool bRet = false;
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

    printf("Enter the number to Search :\n");
    scanf("%d",&iValue);
   
    //STEP 2 USE THE MEMORY
    bRet = LinearSearch(iPtr,iLenght,iValue);
    if(bRet == true)
    {
        printf("%d is present in data\n",iValue);
    }
    else
    {
        printf("%d is not present in data\n",iValue);
    }
    
    //STEP 3 free the memory
    free(iPtr);

    return 0;
}