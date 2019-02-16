#include <stdio.h>
#include <string.h>

int inCapital(char currentChar) {
    if (currentChar >= 65 && currentChar <= 90) {
        return 1;
    } else {
        return 0;
    }
}

int isAlphabiticalChar(char currentChar) {
    if((currentChar >= 65 && currentChar <= 90) || (currentChar >= 97 && currentChar <= 122)) {
        return 1;
    } else {
        return 0;
    }
}

void addToStrAndIncrementIndex(char* str, int* index, char c) {
    str[*index] = c;
    *index = *index+1;
}

void CamelCase(char * string[]) {
  char * str = string;
  char* finalStr = realloc(NULL, sizeof(char)*(strlen(str) + 1));
  int globalIndex = 0;
  // code goes here

  if(strlen(str) == 0) {
      printf("");
      return;
  }

  if (isAlphabiticalChar(str[0])) {
      if(inCapital(str[0])) {
          addToStrAndIncrementIndex(finalStr, &globalIndex, (str[0]+32));
        } else {
          addToStrAndIncrementIndex(finalStr, &globalIndex, (str[0]));
        }
  }

  for(int i = 1; i < strlen(str); i++) {
      if(isAlphabiticalChar(str[i-1])) {
          if(isAlphabiticalChar(str[i])) {
              if (inCapital(str[i])) {
                  addToStrAndIncrementIndex(finalStr, &globalIndex, (str[i]+32));
              } else {
                  addToStrAndIncrementIndex(finalStr, &globalIndex, (str[i]));
              }
          }
      } else {
          if(isAlphabiticalChar(str[i])) {
              if (inCapital(str[i])) {
                  addToStrAndIncrementIndex(finalStr, &globalIndex, (str[i]));
              } else {
                  addToStrAndIncrementIndex(finalStr, &globalIndex, (str[i]-32));
              }
          }
      }
  }

  printf("%s", finalStr);
  return;

}

int main(void) {

  // keep this function call here
  CamelCase(gets(stdin));
  return 0;

}
