//count no of words
#include <stdio.h>

int main()
{
    char A[30];
    printf("Enter a string:\n");
    gets(A);
    int i,w=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')//checking f multiple white spaces are not counted as extra words
        w++;
    }
    printf("No of words=%d",(w+1));//w actually counts number of spaces thus +1
}
