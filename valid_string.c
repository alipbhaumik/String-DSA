//validating a string
#include <stdio.h>
int validstring(char *A)
{
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=49 && A[i]<=57))
            return 0;
    }
    return 1;
}
int main()
{
    char *A[30];
    printf("Enter a string:\n");
    gets(A);
    if(validstring(A))
    printf("Valid string");
    else
    printf("Invalid String");
}
