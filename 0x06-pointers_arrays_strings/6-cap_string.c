#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string passed
 * Return capitalized string
 */
 char *cap_string(char *str)
 {
     int i = 0, j;
     char caps[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

     while(str[i])
     {
         if (str[0] >= 97 && str[0] <= 122)
            str[0] -= 32;
        j = 0;
         while(caps[j])
         {
             if((str[i] == caps[j]) && (str[i + 1] >= 97 && str[i + 1] <= 122))
                str[i + 1] -= 32;
             j++;
         }
         i++;
     }
     return (str);
 }
