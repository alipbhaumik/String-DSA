//palindrome
#include <stdio.h>
int main()
{
    char A[30];
    printf("Enter a string:\n");
    gets(A);
    char temp;
    int i,j;
    char B[30];
    for(i=0;A[i]!='\0';i++)//copying A into B as well as finding last positon
    {
        B[i]=A[i];
    }
    B[i]='\0';//last element set '\0' to make it a string
    i=i-1;
    for(j=0;j<i;j++,i--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    for(i=0,j=0;(B[j]!='\0' || A[i]!='\0');i++,j++)
    {
        if(A[i]!=B[j])
            break;
    }
    if(A[i]==B[j])
    printf("palindrome");
    else
    printf("not palindrome");
}
