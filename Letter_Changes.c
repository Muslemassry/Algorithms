#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *inputString(FILE* fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(char)*size);//size is start size
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';
    return realloc(str, sizeof(char)*len);
}

void LetterChanges(char * str[]) {
  size_t size = strlen(str);
  char * finalStr = str;
  char * strCopy = realloc(NULL, sizeof(char)*size);
  for(int index = 0; index < size; index++) {

		 if((finalStr[index] >= 65 && finalStr[index] <= 86) || (finalStr[index] >= 97 && finalStr[index] <= 121)) {
		  //   printf("at indexxxx %d the char %c\n", index, finalStr[index]);
			  *(strCopy + (sizeof(char)*index)) = finalStr[index] + 1;
		  } else if (finalStr[index] == 90 || finalStr[index] == 122) {
		      //printf("at indeeeee %d the char %c\n", index, finalStr[index]);
			  *(strCopy + (sizeof(char)*index)) = finalStr[index] - 25;
		  } else {
		      //printf("at indeoooo %d the char %c\n", index, finalStr[index]);
		      *(strCopy + (sizeof(char)*index)) = finalStr[index];
		  }

		  if(*(strCopy + (sizeof(char)*index)) == 97 || *(strCopy + (sizeof(char)*index)) == 101 || *(strCopy + (sizeof(char)*index)) == 105 || *(strCopy + (sizeof(char)*index)) == 117 || *(strCopy + (sizeof(char)*index)) == 111) {
			  *(strCopy + (sizeof(char)*index)) = *(strCopy + (sizeof(char)*index)) - 32;
		  }
	  }
  printf("%s", strCopy);

}

int main(void) {
	char *m;
	printf("input string : ");
	m = inputString(stdin, 10);
	LetterChanges(m);
    return 0;

}


