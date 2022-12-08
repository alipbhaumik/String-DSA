//duplicates in a string using bits thus masking method
//cannot get the number of dublicates though
#include <stdio.h>

int main()
{
    char A[30];
    printf("Enter a string:\n");
    scanf("%s",&A);
    int H=0;//taking int as my 32 bit variable coz size of int is equal to 32 bits i.e 4 bytes
    int i,x;//x is my masking variable
    for(i=0;A[i]!='\0';i++)
    {
        x=1;
        x=x<<(A[i]-97);//left shifting the value of x(which is 1)by the number of character(according to a 26 character array starts from 0)
        if((x&H)>0)
        printf("Duplicate %c\n",A[i]);
        else
        H=(x|H);//makes value of bit 1 if character is first found
    }
    return 0;
}
