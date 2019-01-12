#include <stdio.h>
#include <string.h>

void LetterCapitalize(char * str[]) {

  char* strPointer = str;
  char* finalStrPointer = realloc(NULL, sizeof(char)*strlen(strPointer));
  int doCapitalize = 1;
  for(int index = 0; index < strlen(strPointer); index++) {
      if (doCapitalize) {
              *(finalStrPointer + ((sizeof(char))* index)) = *(strPointer + ((sizeof(char))* index)) - 32;
              doCapitalize = 0;
          } else if (32 == *(strPointer + ((sizeof(char))* index))) {
              doCapitalize = 1;
              *(finalStrPointer + ((sizeof(char))* index)) = *(strPointer + ((sizeof(char))* index));
          } else {
              *(finalStrPointer + ((sizeof(char))* index)) = *(strPointer + ((sizeof(char))* index));
          }
  }

//   printf("%d\n", strlen(finalStrPointer));
  printf("%s", finalStrPointer);
}

int main(void) {

  // keep this function call here
  LetterCapitalize(gets(stdin));
  return 0;

}
