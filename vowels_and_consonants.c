//count no of vowels and consonants in a string
#include <stdio.h>

int main()
{
    char A[30];
    printf("Enter a string:\n");
    gets(A);
    int i,v=0,c=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        v++;
        else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
        c++;
    }
    printf("No of vowels=%d \nNo of consonants=%d \n",v,c);
}
