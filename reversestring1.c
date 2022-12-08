//reverse a string method 1
#include <stdio.h>
void reversestring(char *A)
{
    int i,j;
    char B[30];
    for(i=0;A[i]!='\0';i++)
    {
        //empty loop to get i to the end value '\0'
    }
    i=i-1;//setting i's index to last character
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];//reversing the string by copying the elements backwards into another array
    }
    printf("%s",B);
}
int main()
{
    char *A[30];
    printf("Enter a string:\n");
    gets(A);
    reversestring(A);
}
