#include<stdio.h>
/*
Enter String
PRAMOD
Updated String is :pramod
*/
void StrLwrX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
          *str = *str + 32;
        }
        str++;
    }  
}   

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    StrLwrX(Arr);
    
    printf("Updated String is :%s \n",Arr);

    return 0;
}