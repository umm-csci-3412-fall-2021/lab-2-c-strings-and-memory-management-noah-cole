#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#include "disemvowel.h"

//isVowel: takes char 'test' and tests if it is a vowel, returns true if it is, returns false otherwise
bool isVowel(char test) {
  bool vowel = false;

  //Use switch to test (lowercase'd) char against possible vowels
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

//disemvowel: takes a string and returns that string with vowels removed.
char *disemvowel(char *str) {
  //get the length of the string
  int len = strlen(str);
  //declare the new char set
  char *newString = (char*) calloc(len + 1, sizeof(char));
  //set the beginning index of where we will place non-vowel characters into the new char set
  int placeIndex = 0;

  //loop through the string (characters) and check if they are a vowel,
  //place them in the new char set (and increment the counter) if they are not
  while (*(str) != '\0') {
    if(!isVowel(*str)) {
      newString[placeIndex++] = *str;
    }
    str++;
  }

  //place the null termninator
  newString[placeIndex] = '\0';

  //return the character set with vowels removed
  return newString;
}
