#include <stdio.h>
#include <conio.h>
#include <string.h>
int main (void)
{
    int length,mid,i,ans=0;
    char word[30];
    printf ("Enter a word\n");
    scanf("%s",word);
    length=strlen(word);
    mid=length/2;
    for ( i = 0; i < mid; i++)
    {
        if (word [i] != word [length-1])
        {
            ans = 1;
        }
        length--;
    }
    if (ans == 1)
    {
        printf ("This is not a palindrome");
    }
    if (ans == 0)
    {
        printf ("This is a palindrome");
    }
    
    
}