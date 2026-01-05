#include<stdio.h>
/*
Enter String
HellO WoRlD
Updated String is H___O W_R_D :
*/
void Change(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z' )
        {
          *str = '_';
        }
        str++;
    }  
}   

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    Change(Arr);
    
    printf("Updated String is %s :\n",Arr);

    return 0;
}