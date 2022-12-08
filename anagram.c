//anagrams
#include <stdio.h>
int length(char A[30])
{
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        //empty loop
    }
    return i;
}
int main()
{
    char A[30],B[30];
    printf("Enter 1st string:\n");
    scanf("%s",&A);
    int lenA=length(A);
    printf("Enter 2nd string:\n");
    scanf("%s",&B);
    int lenB=length(B);
    if(lenA==lenB)
    {
    int H[26]={0};//hash table initialized with zero
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;//incrementing corresponding position in hash table
    }
    for(i=0;B[i]!=0;i++)
    {
        H[B[i]-97]-=1;
        if(H[B[i]-97]<0)
        {
            printf("Not an Anagram\n");
            break;
        }
    }
    if(B[i]=='\0')
    printf("Anagram");
    }
    else
    {
        printf("Not an Anagram----Unequal Lengths");
    }
    return 0;
}
