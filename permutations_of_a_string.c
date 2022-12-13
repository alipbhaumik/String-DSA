
#include <stdio.h>
void swap(char s[],int a,int b)//swapping the characters in the string
{
    char t;
    t=s[a];
    s[a]=s[b];
    s[b]=t;
}
void perm(char s[],int l,int h)
{
    int i;
    if(l==h)
    {
        printf("%s\n",s);
    }
    else
    {
        for(i=l;i<=h;i++)
        {
        swap(s,l,i);//swap the positions in call by address mode
        perm(s,l+1,h);//call it with increased value of i
        swap(s,l,i);//swap it back to previous model
        }
    }
}
int main()
{
    printf("Enter the string:");
    char s[30];
    int len;
    scanf("%s",&s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        //empty loop
    }
    len=i;
    int h=len-1;
    int l=0;
    printf("Permutations are:\n");
    perm(s,l,h);
    
}
