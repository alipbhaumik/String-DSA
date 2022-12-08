//reverse a string method 2 swapping last and first characters
#include <stdio.h>
int main()
{
    char A[30];
    printf("Enter a string:\n");
    gets(A);
    char temp;
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
        //empty loop to go to the last character 
    }
    i=i-1;
    for(j=0;j<i;j++,i--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("Reverse string:%s\n",A);
}
