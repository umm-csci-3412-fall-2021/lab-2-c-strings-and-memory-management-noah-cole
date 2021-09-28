#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
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
  return (char*) "";
}
