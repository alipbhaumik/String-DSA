//changing case of a string
#include <stdio.h>

int main()
{
    char A[30];
    printf("Enter a string:\n");
    gets(A);
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>='A' && A[i]<='Z')//ascii codes or..
            A[i]=A[i]+32;
           
        else if(A[i]>='a' && A[i]<='z')//characters both work
            A[i]=A[i]-32;
            
    }
    printf("%s",A);
}
