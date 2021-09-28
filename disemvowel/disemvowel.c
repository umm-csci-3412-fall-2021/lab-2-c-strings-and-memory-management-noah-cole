#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#include "disemvowel.h"

bool *isVowel(char test) {
  bool vowel = false;

  switch(tolower(test)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowel = true;
      break;
    default :
      break;
  }
  return vowel;
  
}

char *disemvowel(char *str) {
  char* newString = calloc(strlen(str) + 1, sizeof(str));
  int placeIndex = 0;

  while (*(str) != "\0") {
    if(isVowel(str)) {
      newString[placeIndex++] = str;
    }
    str++;
  }
  newString[placeIndex] = "\0";
  return newString;
}
