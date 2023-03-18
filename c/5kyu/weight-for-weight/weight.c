#include <ctype.h>
#include <string.h>

char* orderWeight(const char* s) 
{
    int length = strlen(s);
    int weights[length];

    for (int character = 0, member = 0; character < length; character++)
    {
        if (isdigit(s[character]) == 0)
        {
            weights[member] = atoi(s[character]);
        }
        
    }
}
