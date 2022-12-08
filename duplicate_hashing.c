//duplicates in a string using hashing assuming lower case characters
#include <stdio.h>

int main()
{
    char A[30];
    printf("Enter a string:\n");
    scanf("%s",&A);
    int i;
    int H[26]={0};//the hash map
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;//incrementing value by 1 everytime the character pops up
    }
    for(i=0;i<26;i++)
    {
      if(H[i]>1)
      printf("%c has %d number of duplicates\n",97+i,H[i]);
    }
    return 0;
}
