/*
 * SimpleSymbols.c
 *
 *  Created on: 15 Jan 2019
 *      Author: m
 */

#include <stdio.h>
#include <string.h>
void SimpleSymbols(char * string[]) {
	char * str = string;
	if (strlen(str) < 3 || (((str[0] <= 90 && str[0] >= 65) || str[0] <= 122 && str[0] >= 97))) {
		printf("false");
		return;
	}

	for (int index = 1; index < strlen(str)-1; index++) {
		if ((str[index] <= 90 && str[index] >= 65) || str[index] <= 122 && str[index] >= 97) {
			if (str[index-1] != 43 || str[index+1] != 43) {
				printf("false");
				return;
			}
		}
	}

	printf("true");
	return;
}

int main(void) {
	//SimpleSymbols("+d+=3=+s+\0");

	SimpleSymbols("+d=\0");

	return 0;
}

