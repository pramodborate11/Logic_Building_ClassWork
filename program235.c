#include<stdio.h>
/*
Enter String
aabbcc ddaabb
Updated String is __bbcc dd__bb :
*/
void Change(char str[])
{
    while(*str != '\0')
    {
        if(*str == 'a' )
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