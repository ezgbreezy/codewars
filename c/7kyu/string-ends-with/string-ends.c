#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    // get lengths of arguments
    size_t len_str = strlen(string);
    size_t len_end = strlen(ending);
  
    // check for invalid input
    if (len_end > len_str)
      return false;
    
    // check if ends of strings match
    if (strncmp(string + len_str - len_end, ending, len_end) == 0)
      return true;
    else
      return false;
}