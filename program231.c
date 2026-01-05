#include<stdio.h>

// a e i o u
void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str<= 'Z') )
        {
           iCountCapital++;
        }
      else if((*str >= 'a') && (*str<= 'z') )
        {
           iCountSmall++;
        }
        str++;
    }
    printf("Number of Small Character is :%d\n",iCountSmall);
    printf("Number of Capital Character is :%d\n",iCountCapital);
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);

    return 0;
}