#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simple.h"

int pow2(int a)
{
    return a*a;
}

void upstr(char *str, char *s)
{
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            s[i] = str[i] - 'a' + 'A';
        else
            s[i] = str[i];
    }
    s[i] = '\0';

}
