#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#include "disemvowel.h"

bool isVowel(char test) {
  bool vowel = true;

  switch(tolower(test)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowel = false;
      break;
    default :
      break;
  }
  return vowel;
  
}

char *disemvowel(char *str) {
  int len = strlen(str);
  char *newString = (char*) calloc(len + 1, sizeof(char));
  int placeIndex = 0;

  while (*(str) != '\0') {
    if(isVowel(*str)) {
      newString[placeIndex++] = *str;
    }
    str++;
  }
  newString[placeIndex] = '\0';
  return newString;
}
