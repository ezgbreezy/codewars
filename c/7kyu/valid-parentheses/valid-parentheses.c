#include <stdbool.h>
#include <string.h>

bool valid_parentheses(const char* str) 
{
    int length = strlen(str);

    // Check if valid length
    if (length < 0 || length > 100)
    {
        return false;
    }
    else if (length == 0)
    {
        return true;
    }

    // Check if valid opening parenthesis
    if (str[0] == ')')
    {
        return false;
    }

    int parentheses = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == '(')
        {
            parentheses++;
        }
        if (str[i] == ')')
        {
            parentheses--;
        }
        if (parentheses < 0)
        {
            return false;
        }
    }
    
    if (parentheses == 0)
    {
        return true;
    }

    return false;
}