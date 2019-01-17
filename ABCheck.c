/*
 * ABCheck.c
 *
 *  Created on: 17 Jan 2019
 *      Author: m
 */

#include <stdio.h>
#include <string.h>
void ABCheck(char * string[]) {
  char* str = string;
  int length = strlen(str);
  if(length < 5) {
      printf("false");
      return;
  }

  for(int index = 0; index < length-4; index++) {
      if(((str[index] == 'a' || str[index] == 'A') && (str[index+4] == 'b' || str[index+4] == 'B'))
            || (str[index] == 'b' || str[index] == 'B') && (str[index+4] == 'a' || str[index+4] == 'A')) {
        printf("true");
        return;
      }
  }

  printf("false");
  return;

}

int main(void) {

  // keep this function call here
  ABCheck(gets(stdin));
  return 0;

}
