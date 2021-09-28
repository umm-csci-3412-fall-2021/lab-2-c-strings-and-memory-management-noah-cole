#include <stdlib.h>
#include <stdbool.h>

#include "disemvowel.h"

bool *isVowel(char test) {
  bool vowel = false;

  switch(test) {
    case 'A':
      vowel = true;
      break;
    case 'a':
      vowel = true;
      break;
    case 'E':
      vowel = true;
      break;
    case 'e':
      vowel = true;
      break;
    case 'I':
      vowel = true;
      break;
    case 'i':
      vowel = true;
      break;
    case 'O':
      vowel = true;
      break;
    case 'o':
      vowel = true;
      break;
    case 'U':
      vowel = true;
      break;
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
