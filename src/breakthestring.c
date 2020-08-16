#include "breakthestring.h"

void breakthestring(char str[100])
{
    char str1[10][10];
    int count=0,j=0,i;
    /* Prints individual words separated by a delimiter _ in a large string*/
    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]=='_'||str[i]=='\0')
        {
            str1[count][j]='\0';
            count++;
            j=0;
        }
        else
        {
            str1[count][j]=str[i];
            j++;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%s",str[i]);

    }

}

