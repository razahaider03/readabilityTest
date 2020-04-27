#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string text = get_string("text: ");
    int p=0,q=0,r;
    
    {
        printf("Your Text is : %s\n", text);
    }
    for(p=0,r=strlen(text);p<r;p++)
    {
        if (text[p]!= ' ' && text[p]!= '\0')
        {
            q++;
        }
        
    }
    printf("no.of char is %i\n",q);
}