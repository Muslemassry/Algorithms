/*
 * AlphabetSoup.c
 *
 *  Created on: 16 Jan 2019
 *      Author: m
 */
#include <stdio.h>
#include <string.h>

void AlphabetSoup(char * arr[]) {
  char * str = arr;
  int n = strlen(str);
  char * string = malloc(n * sizeof(int));
  int i, j;
  char temp;
  for (i = 0 ; i < n ; i++) {
	  string[i] = str[i];
  }

  for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
           if (string[i] > string[j]) {
              temp = string[i];
              string[i] = string[j];
              string[j] = temp;
           }
        }
     }
  printf("%s", string);
}

int main(void) {

  // keep this function call here
	AlphabetSoup("heelooo\0");
  return 0;

}

