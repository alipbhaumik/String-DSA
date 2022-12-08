//finding length of a string
#include <stdio.h>

int main()
{
    char string[30];
    printf("Enter a string:\n");
    gets(string);
    int i;
    for(i=0;string[i]!='\0';i++)//single quotes are important here as it represents character
    {
        //empty loop
    }
    printf("Length of string is %d",i);
    return 0;
}
