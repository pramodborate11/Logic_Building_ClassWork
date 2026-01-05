#include<stdio.h>

// a e i o u
int CountOccurence(char str[],char ch)
{
  int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCount++;
        }
      
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    char cValue = '\0';
    
    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf("%c",&cValue);              //Issue

    iRet = CountOccurence(Arr,cValue);

    printf("Number of Occurence are : %d\n",iRet);

    return 0;
}