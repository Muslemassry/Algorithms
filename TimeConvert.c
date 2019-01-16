/*
 * TimeConvert.c
 *
 *  Created on: 16 Jan 2019
 *      Author: m
 */
#include <stdio.h>

void TimeConvert(int number[]) {
  int num = number;
  if (num < 60) {
      printf("0:%d", num);
  } else {
      printf("%d:%d", (num-(num%60))/60, (num%60));
  }
}

int main(void) {

  // keep this function call here
  TimeConvert(gets(stdin));
  return 0;
}
