#include "revert_string.h"
#include <stdio.h>

void RevertString(char *str)
{
  // your code here
  int len=1, n;
  char temp;  
  
  for (int i = 0; str[i] != '\0'; i++){
      len = i;
      n = i;
  }
  
   for(int i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
}